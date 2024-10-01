#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   
       string s;
       cout<<"enter string : ";
       cin>>s;

      int hash[26] = {0};
    for(int i=0;i<s.size();i++){
      if(s[i]>='a' && s[i]<='z'){
          hash[s[i]-'a']++;
      }
    }
     int t;
    cout<<"enter test cases : ";
    cin>>t;
    while(t--){
        char charac;
        cout<<"enter char"<<endl;
        cin>>charac;
        cout<<"frequency of the"<<charac<<"be : "<<hash[charac-'a']<<endl;
        
    }
    return 0;
}