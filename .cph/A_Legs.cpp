#include<bits/stdc++.h>
using namespace std;
int main(){
        int tst;
        cin>>tst;
        while(tst--){
                int n;
                cin>>n;
                int ans = n/4;
                n%=4;
                if(n!=0)ans+=n/2;
                cout<<ans<<endl;
        }
        return 0;
}