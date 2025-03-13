#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a,b;
        cin>>n>>a>>b;
        int ans = 0;
        int twos = n/2;
        int ones = n-2*twos;
        if(2*a>b){
            ans = twos*b+ones*a;
        }else if(2*a<=b)ans = n*a;
        cout<<ans<<endl;
    }
    return 0;
}