#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int cnt = 0;
        int carry = 0;
        for(int i=1;i<n;i++){
            if(i==n-i){
                carry = 1;
                break;
            }else if(i>n-i){
                break;
            }
            cnt++;
        }
        cout<<2*cnt+carry<<endl;
    }
    return 0;
}