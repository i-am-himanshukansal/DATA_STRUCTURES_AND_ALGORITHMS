//specified condition is met
#include<iostream>
using namespace std;
int count = 0;
void f(){
    
    if(count == 400){
        return;
    }
    cout<<count<<" ";
    count++;
    f(); 
}
int main(){

    f();
    return 0;
}