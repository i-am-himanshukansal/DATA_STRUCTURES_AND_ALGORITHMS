#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";

    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter n = ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    v.pop_back();//remove last element of vector

    printvector(v);
    vector<int>v2(10,2);
    printvector(v2);
    vector<int >&v3 = v2;
    printvector(v2);
    printvector(v3);
    v3.push_back(45);
     printvector(v2);
    printvector(v3);
    v2.push_back(123);
    printvector(v2);
    printvector(v3);

    

    return 0;
}