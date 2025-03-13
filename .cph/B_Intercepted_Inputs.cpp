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
        sort(v.begin(),v.end());
        int num = n-2;
        int a,b;
        for(int i=0;i<n;i++){
            if(mpp.find(num/(v[i]))!=mpp.end() && (num/v[i])*v[i]==num){
                a=min(num/v[i],v[i]);
                b=max(num/v[i],v[i]);
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
        
    }
    return 0;
}