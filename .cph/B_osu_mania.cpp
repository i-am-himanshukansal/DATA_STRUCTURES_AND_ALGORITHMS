#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=n-1;i>=0;i--){
            for(int j=3;j>=0;j--){
                if(v[i][j]=='#')cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}