#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(auto&ch:s)if(ch=='1')cnt++;
        int temp = sqrt(s.size());

        if(temp*temp==s.size() && cnt==s.size()){
            cout<<"Yes"<<endl;
            continue;
        }else if(temp*temp==s.size() && cnt>=4*(n-1)){
            cout<<"Yes"<<endl;
            continue;
        }else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}