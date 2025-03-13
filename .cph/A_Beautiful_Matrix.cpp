#include<bits/stdc++.h>
using namespace std;
int main(){
    //himanshu kansal
    int n =5;
    vector<vector<int>>v(n,vector<int>(n));
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                ans = abs(2-i)+abs(2-j);
                break;
            }
            
        }
    }
    cout<<ans<<endl;
    return 0;
}