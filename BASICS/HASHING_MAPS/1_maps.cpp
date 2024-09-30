#include<iostream>
using namespace std;
int main(){
   
        int n;
        cout<<"enter no of elements : ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        // precompute
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
     int t;
    cout<<"enter test cases : ";
    cin>>t;
    while(t--){
        int number;
        cin>>number;
        cout<<"frequency of the"<<number<<"be : "<<hash[number]<<endl;
        
    }
    return 0;
}