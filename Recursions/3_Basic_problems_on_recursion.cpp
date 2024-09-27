//printing name 4 times by using recursion
#include<iostream>
using namespace std;
int n = 1;
void printname(){
    if(n>4)return;
    cout<<n<<"    =>    himanshukansal 22132"<<endl;
    n++;
    printname();
}
int main(){
        printname();
        return 0 ;
}