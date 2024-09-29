#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
    int last  = fibo(n-1);
    int s_last = fibo(n-2);
    return last+s_last;
}
int main(){
    int t;
    cout<<"enter no of test cases: ";
    cin>>t;
    int k=0;
    while(k<=t){
    cout<<fibo(k) <<" ";
    k++;
    }
    //HIMANSHUKANSAL_iiitu
    
    return 0;
}