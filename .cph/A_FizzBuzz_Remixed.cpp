#include <bits/stdc++.h>
using namespace std;
int main(){

    int tst;
    cin >> tst;

    while (tst--) {
        int n;
        cin >> n;
        
        int x = n/15;
        int cnt = x*3;
        
        for(int i= x*15;i<=n;i++){
            if(i%3==i%5)cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
