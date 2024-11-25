#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string infix_to_prefix(string &s){
    string ans="";
    unordered_map<char,int>prior = {{'^',3},{'*',2},{'/',2},{'+',1},{'-',1}};

    reverse(s.begin(),s.end());

    int i=0;
    stack<char>st;
    while(i<s.size()){
        if(s[i]>='a' && s[i]<='z'||s[i]>='A' && s[i]<='Z'||s[i]>='0' && s[i]<='9'){
            ans+=s[i];
        }else if(s[i]==')'){
            st.push(s[i]);
        }else if(s[i]=='('){
            while(st.top()!=')'){
                ans+= st.top();
                st.pop();
            }
            st.pop();
        }else{
            while(!st.empty() && prior[s[i]]<prior[st.top()]){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
            ans+=st.top();
            st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

int main() {
  
       int t;
       cout<<"enter test cases : ";
       cin >> t;
       while (t--) {
           // Your code here
            string s;
            cout<<"enter string  be : ";
            cin>>s;
            string result = infix_to_prefix(s);
            cout<<"infix to prefix be : "<<result<<endl;
       }
    
    return 0;
}