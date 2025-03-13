#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target = v[k-1];
    for(int i=0;i<n;i++){
        if(v[i]>=target && v[i]!=0)cnt++;
    }
    if(v[0]==0)cout<<0<<endl;
    else cout<<cnt<<endl;

    return 0;
}