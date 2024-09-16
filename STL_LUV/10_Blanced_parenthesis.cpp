#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s;
 string str;
 cout<<"enter str : ";
 cin>>str;

 for(int i=0;i<str.length();i++){
    s.push(str[i]);
 }
int counta =0;
int countb=0;
 while(!s.empty()){
    if(s.top()=='{'){
        counta++;
        s.pop();
    }else{
        countb++;
        s.pop();
    }
 }
 if(counta==countb){
    cout<<"yes";
 }else{
    cout<<"no";
 }


   return  0;
}