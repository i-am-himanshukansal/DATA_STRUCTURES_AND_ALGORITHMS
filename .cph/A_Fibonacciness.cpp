#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int a,b,d,e;
        cin>>a>>b>>d>>e;

        int maxi = 1;
    
        int c = a+b;
        int cnt = 1;
        if(d==b+c)cnt++;
        if(e==c+d)cnt++;
        maxi = max(maxi,cnt);

        cnt=1;
        c = d-b;
        if(c==a+b)cnt++;
        if(e==d+c)cnt++;
        maxi = max(maxi,cnt);

        cnt=1;
        c = e-d;
        if(c==a+b)cnt++;
        if(d==c+b)cnt++;
        maxi = max(cnt,maxi);
        
        cout<<maxi<<endl;
    }
    return 0;
}