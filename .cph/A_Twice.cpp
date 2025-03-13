#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int>v(n);
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mpp[v[i]]++;
        }
        int score = 0;
        for(auto&el:mpp)score+=el.second/2;
        cout<<score<<endl;
    }
    return 0;
}