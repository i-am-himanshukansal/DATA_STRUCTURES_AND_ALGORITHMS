#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<char,int>unmap={{'[',1} , {']',-1} , {'{',2} , {'}',-2} , {'<',3} , {'>',-3}};
string str;
cout<<"enter str";
cin>>str;
int count =0;
for(int i=0;i<str.length();i++){
        count = count+unmap[str[i]];
}

if(count==0){
    cout<<"yes balanced parenthesis"<<endl;
}else{
    cout<<"no  balanced parenthesis"<<endl;
}



   return  0;
}