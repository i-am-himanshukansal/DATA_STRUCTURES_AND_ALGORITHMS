#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x;
    cin >> x;
    string str = to_string(x);
    int k = 0;
    if(str[k]=='9')k++;
    for(int i=k;i<str.size();i++)if(str[i]>='5' && str[i]<='9')str[i] = '9'-str[i]+'0';
    long long ans = stoll(str);
    cout<<ans<<endl;
    return 0;
}