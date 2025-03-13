#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int a,b;
        cin>>a>>b;
        b=b%2;
        if((a%4==0 && b%2==0)||(a%2==0 && b%2==0)||(a==0 && b==0)||(a==0 && b%2==0)||(a%2==0 && b==0)){
            cout<<"YES"<<endl;
            continue;
        }
        if((a%2!=0)||(a==0 && b%2!=0)||((a*1+b*2)%2!=0)){
            cout<<"NO"<<endl;
            continue;
        }
        if((a-2)%2==0 && (b+1)%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        
    }
    return 0;
}