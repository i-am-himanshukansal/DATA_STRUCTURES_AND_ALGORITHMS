#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        string s;
        cin>>s;
        if(s.size()>10){
            int n = s.size()-2;
            string ans = s[0]+to_string(n)+s[s.size()-1];
            cout<<ans<<endl;
            continue;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}