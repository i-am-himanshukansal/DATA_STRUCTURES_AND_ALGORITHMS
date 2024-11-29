#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int test;
        cin>>test;
        while(test--){
                int n,k;
                cin>>n>>k;
                

                unordered_map<int,int>mpp;
                for(int i=0;i<k;i++){
                        int b,c;
                        cin>>b>>c;
                        if(mpp.find(b)!=mpp.end()){
                                mpp[b]=max(mpp[b],c);
                        }else{
                                mpp[b]=c;
                        }
                }
                vector<int>cost;
                for(const auto&pair : mpp){
                        cost.push_back(pair.second);
                }
                sort(cost.rbegin(),cost.rend());
                int sum=0;
                int costsize = cost.size();
                int lenth = min(n,costsize);
                for(int i=0;i<lenth;i++){
                        sum+=cost[i];
                }
                cout<<sum<<endl;
        }
        return 0;
}