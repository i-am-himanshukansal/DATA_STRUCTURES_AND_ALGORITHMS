#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string prefix_to_infix(string &s){
        
        stack<string>stri;
        string ans = "";

        int i = s.size()-1;
        while(i>=0){
                 if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
                        string str = "";
                        str+=s[i];
                        stri.push(str);
                }else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                        string s1 = stri.top();
                        stri.pop();
                        string s2 = stri.top();
                        stri.pop();
                        string str = '('+s1+s[i]+s2+')';
                        stri.push(str);
                }
                i--;
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
     string ans = prefix_to_infix(s);
     cout<<ans<<endl;
    }
        return 0;
}