
//vectors of vectors
#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>&x){
for(int i=0;i<x.size();i++){
    cout<<x[i]<<" ";
}

cout<<endl;
}
int main(){
    int m;
    cout<<"enter no of vectors: ";
    cin>>m;
    vector<vector<int>>v;
    for(int i=0;i<m;i++){
        int n;
        cout<<  "enter vector size of v["<<i<<"] be : ";
        cin>>n;
        vector<int>temp;
      for(int j=0;j<n;j++){
        int x;
    cin>>x;
    temp.push_back(x);
    
      }
      v.push_back(temp);
    }


    // vector<int>temp;
    // int h;
    // cout<<"enter size of extra vector ";
    // cin>>h;
    // for(int i=0;i<h;i++){
    //     int x;
    //     cin>>x;
    //     temp.push_back(x);
    // }
    vector<int>temp= {1,2,3,4,5,6,89,56,53,45};
    v.push_back(temp);
  for(int i=0;i<v.size();i++){
    printvector(v[i]);
  }
    return 0;
}