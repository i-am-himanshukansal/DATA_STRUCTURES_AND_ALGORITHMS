#include<bits/stdc++.h>
using namespace std;
bool isswap(int &a,int &b){
   if(a>b)return true;
   return false;
}
void printvector( vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int n;
    cout<<"enter n = ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
 
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isswap(v[i],v[j])){
                    swap(v[i],v[j]);
                }
            }
    }
    printvector(v);
    return 0;
}