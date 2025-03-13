#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tst;
    cin>>tst;
    while(tst--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        int dash=0;
        int us=0;
        for(auto&ch:s){
            if(ch=='-')dash++;
            else us++;
        }
        if(dash<2 || us<1){
            cout<<0<<endl;
            continue;
        }else{
            long long  ans = 1LL*(dash/2)*(dash-dash/2)*us;
            cout<<ans<<endl;
            continue;
        }
        
    }
    return 0;
}