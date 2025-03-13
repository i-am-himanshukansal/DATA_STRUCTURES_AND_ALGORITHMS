#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        string s;
        cin>>s;

        string ans = "";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='p')ans+='q';
            else if(s[i]=='q')ans+='p';
            else if(s[i]=='w')ans+='w';
        }
        cout<<ans<<endl;
    }
    return 0;
}