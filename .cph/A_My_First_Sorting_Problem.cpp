#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst,x,y;;
    cin>>tst;
    while(tst--){
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    return 0;
}