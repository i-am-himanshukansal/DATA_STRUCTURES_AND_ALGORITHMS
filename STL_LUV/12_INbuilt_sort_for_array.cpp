#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[],int &n){//arr me reference diye bina bhi referenced array hi pass hota hai function me
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting function are using for sort the array

        sort(arr,arr+n);
        printarr(arr,n);
        

        return 0;
}