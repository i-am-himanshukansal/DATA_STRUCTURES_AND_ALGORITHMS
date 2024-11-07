#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    cout<<"\nElements inside vector v : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector<int> selection_sort(vector<int>v){
   
     for(int i=0;i<v.size();i++){
         int mini = v[i];
        int k = i;


        for(int j=i+1;j<v.size();j++){
                if(v[j]<mini){
                    mini = v[j];
                    swap(v[k],v[j]);
                }
        }
     }
     return v;
}

int main(){
    int n;
    cout<<"\nEnter size of vector : ";
    cin>>n;
    vector<int>v;
    cout<<"\nEnter elements in vector v : ";

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v = selection_sort(v);
    print(v);
    return 0 ;
}