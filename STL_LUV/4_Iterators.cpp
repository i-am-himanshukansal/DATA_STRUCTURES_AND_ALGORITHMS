    #include<bits/stdc++.h>
    using namespace std;
    int main(){

        int n;
        cout<<"enter size : ";
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;;
            cin>>x;
            v.push_back(x);
        }
        vector<int>::iterator it = v.begin();
        for(it = v.begin();it!=v.end();it++){
            cout<<(*it)<<" ";
        }
        cout<<endl;

        vector<pair<int,int>>pairvect{{1,2},{56,12},{56,78}};
        vector<pair<int,int>>::iterator itt = pairvect.begin();
        for(itt=pairvect.begin();itt!=pairvect.end();itt++){
            cout<<itt->first<<" "<<itt->second<<endl;
        }
        cout<<endl;
        return 0;
    }