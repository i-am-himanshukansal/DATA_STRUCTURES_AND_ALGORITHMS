#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node*next1){
        cout<<"constructor called"<<endl;
        data = data1;
        next = next1;
    }
    Node(int data1){
        this->data=data1;
        this->next=nullptr;
    }

};

int main(){

    
 int arr[] = {2,5,8,7};   
  Node x(arr[2],nullptr);
    cout<<x.data << endl;
    cout<<x.next<<endl;

    return 0;

    }
    