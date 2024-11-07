#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    cout<<"\nElements inside vector v : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
// vector<int> bubble_sort(vector<int>v){
   

//      return v;
// }

int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements in vector v : ";

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // v = selection_sort(v);
    // print(v);

    for(int i= 0;i<v.size();i++){
        for(int j=0;j<v.size()-i-1;j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                }
        }
    }
    cout<<"after bubble sort ";
    print(v);
    return 0 ;
}