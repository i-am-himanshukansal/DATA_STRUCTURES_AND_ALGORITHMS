#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a ,pair<int,int>&b ){
    if(a.first==b.first){
            return a.second<b.second ;            //return false jAN PUCH KE
    }
    return  a.second>b.second;
}
int main(){

    vector<pair<int,int>>v;
    int n;
    cout<<"enter n = ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pair<int ,int>p;
        p = {x,y};
        // p = make_pair(x,y);
        v.push_back(p);

    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }
    
    

    return 0;
}