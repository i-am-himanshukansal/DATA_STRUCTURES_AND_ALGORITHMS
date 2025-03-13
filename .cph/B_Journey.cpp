#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int cnt = 0;
        int sum= a+b+c;
        cnt = (n/(sum))*3;
        n=n%(sum);
        while(n!=0){
            if(n>=a){
                cnt++;
                n-=a;
            }else{
                break;
            }
            if(n>=b){
                cnt++;
                n-=b;
            }else break;

            if(n>=c){
                cnt++;
                n-=c;
            }else break;
        }
        if(n==0)cout<<cnt<<endl;
        else cout<<cnt+1<<endl;
    }
    return 0;
}