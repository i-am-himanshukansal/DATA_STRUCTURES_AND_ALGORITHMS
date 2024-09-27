#include<iostream>
using namespace std;
void printing(){
    cout<<"2";
    printing();
}
int main(){
    printing();
    return 0;
}