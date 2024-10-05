#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int data1){
        this->data=data1;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node*array_to_doubly_linkedlist(vector<int>v){
        Node*head = new Node(v[0]);
        Node*tail = head;
        for(int i=1;i<v.size();i++){
            Node*temp = new Node(v[i]);
            tail->next = temp;
            temp->prev = tail;
            tail=temp;
        }
        return head;
}
void print_ll(Node*head){
    Node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}
int main(){
     vector<int>v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        Node*head = array_to_doubly_linkedlist(v);
        cout<<"after input : ";
        print_ll(head);
        // Node*sample = new Node(45);
        // sample->next = head;
        // head->prev = sample;
        // head = sample;
        cout<<"created linked list doubly : ";
        print_ll(head);

        return 0;
}