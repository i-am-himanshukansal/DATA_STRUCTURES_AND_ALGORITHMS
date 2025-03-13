#include<bits/stdc++.h>
using namespace std;
int main(){
        int test;
        cin>>test;
        while(test--){
                int n;
                cin>>n;
                vector<int>a(n);
                vector<int>b(n);
                for(int i=0;i<n;i++)cin>>a[i];
                for(int i=0;i<n;i++)cin>>b[i];
                int maxi = 0;
                for(int i=0;i<n-1;i++){
                        if(a[i]>b[i+1])maxi+=a[i]-b[i+1];
                }
                maxi+=a[n-1];
                cout<<maxi<<endl;
        }
        return 0;
}