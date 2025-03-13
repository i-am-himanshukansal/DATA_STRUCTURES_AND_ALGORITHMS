#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k,p;
        cin>>n>>k>>p;
        if(n*p<abs(k)){
            cout<<-1<<endl;
            continue;
        }else if(k==0){
            cout<<0<<endl;
            continue;
        }
        k=abs(k);
        int sum=0;
        int cnt=0;
        int i=0;
        while(sum+p<=k &&i<n){
            sum+=p;
            cnt++;
            i++;
        }
        if(k-sum>0 && k-sum<p && i<n){
            cnt++;
            cout<<cnt<<endl;
            continue;
        }else{
            cout<<cnt<<endl;
            continue;
        }
    }
    return 0;
}