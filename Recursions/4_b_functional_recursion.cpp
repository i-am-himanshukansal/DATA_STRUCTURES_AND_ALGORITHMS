#include<iostream>
using namespace std;
int printsum(int i){
        if(i==0){
            return 0;
        }
        return i+printsum(i-1);

}
int main(){
    int n;
    cin>>n;
    cout<<printsum(n);
    return  0;
}