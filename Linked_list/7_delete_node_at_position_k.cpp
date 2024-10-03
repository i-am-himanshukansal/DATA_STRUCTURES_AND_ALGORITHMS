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
Node* delete_node_at_k_position(Node*head, int &k){

    //head pe delete ka case k=1
    //aesi position jaha temp->next
    Node*temp=head;
   if(k==1){
    head = head->next;
    delete temp ;
    return head;
   }





    int i=1;
    while(i!=k-1){
    temp=temp->next;
    i++;
    }
    if(temp->next==NULL){
        cout<<"your input position is not valid (position is greater than the size of the linked list)\nprinting actual linked list ";
        return head;
    }else if(temp->next->next==NULL){
        Node*sample = temp->next;
        temp->next=nullptr;
        delete sample;
        return head;
    }





    Node*sample = temp->next;
    temp->next = sample->next;
    sample->next = nullptr;
    delete sample;
    return head;



}

int main(){
    vector<int>v={1,2,3,45,56,89,45,12,3,5,56,89,45,7845};
    Node*head = array_TO_linkedlist(v);
    cout<<"before deleting  node at k position : "<<" ";
    print_ll(head);
    cout<<endl;


    int position;
    cout<<"Enter position where have to delete : ";
    cin>>position;

    head = delete_node_at_k_position(head,position);
    cout<<"after deleting node at k position : "<<" ";
    print_ll(head);

    return 0;
}