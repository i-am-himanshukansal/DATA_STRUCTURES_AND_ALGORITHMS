#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int a,b;
        cin>>a>>b;
        if(a>=b){
            cout<<a<<endl;
            continue;
        }
        if(a<b){
            int diff = b-a;
            int ans = max(0,a-diff);
            cout<<ans<<endl;
            continue;
        }
    }
    return 0;
}