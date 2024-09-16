#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>&v){//arr me reference diye bina bhi referenced array hi pass hota hai function me
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
    //sorting function are using for sort the array

        sort(v.begin(),v.end());//indexing from 0 to n-1 -----> [0,n)
        printvector(v);
        

        return 0;
}