#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int first = k*l/nl;
    int second = c*d;
    int third = p/np;
    int ans = min({first,second,third})/n;
    cout<<ans<<endl;
    return 0;
}