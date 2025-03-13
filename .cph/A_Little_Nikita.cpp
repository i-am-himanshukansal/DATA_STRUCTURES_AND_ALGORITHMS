#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        if(n>=m && (n-m)%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}