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

void print_ll(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* delete_tail(Node*head){
    if(head==NULL || head->next==NULL)return NULL;

    Node*temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;

    return head;
}


int main(){
    vector<int>v={1,2,3,45,56,89,45,12,3,5,56,89,45,7845};
    Node*head = array_TO_linkedlist(v);
    cout<<"before deleting tail "<<" " ;
    print_ll(head);
    cout<<endl;
    // cout<<head->data<<" ";

    head = delete_tail(head);
    cout<<"after deleting tail "<<" " ;
    print_ll(head);
    cout<<endl;
    

    return 0;
}