#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        for(auto&ch:s)st.insert(ch);
        string temp = "";
        for(auto &el:st)temp+=el;
        unordered_map<char,int>mpp;
        
        for(int i=0;i<temp.size();i++){
            mpp[temp[i]] = i;
        }
        int l = temp.size()-1;
        for(int i=0;i<s.size();i++){
            int idx = mpp[s[i]];
            s[i] = temp[l-idx];
        }
        cout<<s<<endl;
    }
    return 0;
}