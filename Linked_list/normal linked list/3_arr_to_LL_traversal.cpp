#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node*next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        this->data=data1;
        this->next=nullptr;
    }
};



Node* array_TO_linkedlist(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node* tail = head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }
    return head;
}


int length_of_linkedlist(Node* head){
        int cnt=0;
        Node*temp =  head;
        while(temp != nullptr){
            cnt++;
            temp=temp->next;
        }
        return cnt;
}



int main(){
    vector<int>arr = {1,2,3,5,4,6,78,9,12,45,56,23,45,78};
    Node*head = array_TO_linkedlist(arr);
    Node*temp = head;

    int l = length_of_linkedlist(head);
    cout<<l<<endl;
    while(temp->next!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}