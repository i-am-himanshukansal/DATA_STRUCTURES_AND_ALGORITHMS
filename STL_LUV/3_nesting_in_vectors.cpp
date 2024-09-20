//array of vectors
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
    vector<int>v[m];
    for(int i=0;i<m;i++){
        int n;
        cout<<  "enter vector size of v["<<i<<"] be : ";
        cin>>n;
        
      for(int j=0;j<n;j++){
        int x;
    cin>>x;
    v[i].push_back(x);
      }
    }

    // v[m+1].push_back(7854);
  cout<<"following are the input vectors"<<endl;
  for(int i=0;i<m;i++){
    printvector(v[i]);
  }
    return 0;
}