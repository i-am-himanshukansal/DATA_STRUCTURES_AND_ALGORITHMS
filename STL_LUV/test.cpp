#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 6);
    cout<<(*lower)<<endl;

    return 0;
}