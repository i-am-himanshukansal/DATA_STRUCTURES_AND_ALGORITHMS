#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int l = (n-k+1);
        int r = n;
        int sum = 0;

        for(int i=l;i<=r;i++){
            if(i==1){
                sum+=1;
                continue;
            }
            if(i%2==0)sum+=0;
            else sum+=1;
            sum%=2;
        }
        cout<<(sum%2==0?"YES":"NO")<<endl;
    }
    return 0;
}