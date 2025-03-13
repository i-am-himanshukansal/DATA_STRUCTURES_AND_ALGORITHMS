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

        if(n<2){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]==s[s.size()-1]){
            cout<<"NO"<<endl;
            continue;
        }else if(s[0]!=s[s.size()-1]){
            cout<<"YES"<<endl;
            continue;
        }
        
    }
    return 0;
}