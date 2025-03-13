#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        bool findd = true;
        for(int i=1;i<n;i++){
           if((abs(v[i]-v[i-1])!=5&&abs(v[i]-v[i-1])!=7)){
             findd = false;
             break;
           }
        }
        if(findd)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}