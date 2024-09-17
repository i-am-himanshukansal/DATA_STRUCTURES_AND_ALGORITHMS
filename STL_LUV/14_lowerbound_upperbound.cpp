#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<&a[i]<<" ";
    }
    int *ptr = lower_bound(a,a+n,3);
    int *ptr2 = upper_bound(a,a+n,4);
    if(ptr==a+n){
        cout<<" not found" <<endl;
    }
    else cout<<ptr<<endl;
    cout<<ptr2;
    cout<<endl;
    return 0 ;
}