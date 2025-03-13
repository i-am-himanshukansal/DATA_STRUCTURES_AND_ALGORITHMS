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

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i!=j && abs(v[i]-v[j])%k==0)cout<<"YES\n"<<abs(v[i]-v[j])<<endl;
                break;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}