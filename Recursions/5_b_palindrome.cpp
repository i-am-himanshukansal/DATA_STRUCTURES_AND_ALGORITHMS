#include<iostream>
#include<string>
using namespace std;

bool checkpalindrome(int i,string s){
        if(i>=s.size()/2){
           return true;
        }
        if(s[i]!=s[s.size()-1-i]) {return false;}
        return checkpalindrome(i+1,s);
}
int main(){ 
    string s;
    cin>>s;
    cout<<checkpalindrome(0,s);
    return 0;
}