#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string postfix_to_prefix(string &s){
        int i=0;
        stack<string>stri;
        string ans = "";


        while(i<s.size()){
                 if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
                        string str = "";
                        str+=s[i];
                        stri.push(str);
                }else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                        string s1 = stri.top();
                        stri.pop();
                        string s2 = stri.top();
                        stri.pop();
                        string str = s[i]+s2+s1;
                        stri.push(str);
                }
                i++;
        }
        return stri.top();

}

int main(){
         int t;
    cout<<"enter test cases : ";
    cin>>t;
    while(t--){
         string s;
     cout<<"enter string : ";
     cin>>s;

     cout<<"postfix to prefix be : ";
     string ans = postfix_to_prefix(s);
     cout<<ans<<endl;
    }
        return 0;
}