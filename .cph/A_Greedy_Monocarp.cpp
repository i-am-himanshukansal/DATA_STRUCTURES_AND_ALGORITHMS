#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        if(k<=v[0]){
            cout<<0<<endl;
            continue;
        }
        int sum= 0;
        for(int i=0;i<n;i++){
            if(sum+v[i]<=k){
                sum+=v[i];
            }else break;
        }
        if(sum<k)cout<<k-sum<<endl;
        else if(sum==k)cout<<0<<endl;    
    }
    return 0;
}