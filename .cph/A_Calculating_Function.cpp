#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long  ans = 0;
    unsigned long long x= n;
    unsigned long long first = (x)*(x+1)/2;
    unsigned long long m = n/2;
    unsigned long long second = (m)*(m+1)/2;
    ans  = (4*second - first);
    cout<<ans<<endl;
}