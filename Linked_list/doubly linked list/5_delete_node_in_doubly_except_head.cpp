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


        if(v.size()==0){
            return NULL;
        }
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
void delete_node(Node* temp){
    if(temp->next==NULL){
        temp->prev->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return;
    }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return;


}

int main(){
   vector<int>v={1,23,45,56,89,7,45,56,53,22};
    //   vector<int>v;
        Node*head = array_to_doubly_linkedlist(v);
        cout<<"\nlinked list before delete the  node"<<" : ";
        print_ll(head);

        Node*sample = head->next->next->next;
        delete_node(sample);
        cout<<"\nlinked list after delete the  node"<<" : ";
        print_ll(head);

        
        return 0;
}