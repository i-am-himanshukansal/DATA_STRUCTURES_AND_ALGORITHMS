#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int ones = 0;
    int twos = 0;
    int threes = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')continue;

        if(s[i]=='1')ones++;
        else if(s[i]=='2')twos++;
        else if(s[i]=='3')threes++;
    }
    string ans  = "";
    while(ones--){
        if(ans=="")ans+='1';
        else ans = ans+'+'+'1';
    }
    while(twos--){
        if(ans=="")ans +='2';
        else ans = ans+'+'+'2';
    }
    while(threes--){
        if(ans=="")ans+='3';
        else ans = ans+'+'+'3';
    }
    cout<<ans<<endl;
    return 0;
}