#include<bits/stdc++.h>
#include<vector>
using namespace std;
int i=0;
void reversearray(vector<int>&arr){
    if(i>=arr.size()/2){
        return;
    }
    swap(arr[i],arr[arr.size()-1-i]);
    i++;
    reversearray(arr);
}
int main(){

    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    reversearray(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}