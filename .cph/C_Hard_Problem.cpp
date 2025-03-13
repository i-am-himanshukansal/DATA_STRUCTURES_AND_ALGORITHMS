#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int sum = 0;
        int left = 0;

        if(m>=a){
            sum+=a;
            left+=m-a;            
        }else sum+=m;

        if(m>=b){
            sum+=b;
            left+=m-b;
        }else sum+=m;

        if(left>=c)sum+=c;
        else sum+=left;

        cout<<sum<<endl;
    }
    return 0;
}