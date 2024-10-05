#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int data1){
        this->data=data1;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

node* vector_to_linked_list(vector<int>v){
        if(v.size()==0){
            return NULL;
        }

        node*head =new node(v[0]);
        node*tail=head;
        for(int i=1;i<v.size();i++){
            node*temp = new node(v[i]);
            tail->next = temp;
            temp->prev = tail;
            tail=temp;
        }
        return head;
}
void print_ll(node*head){
        node*temp=head;
        while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
        }
}
node*swapping_linked_list(node*head){
    node*temp=head;
    while(temp!=NULL){
        node*last = temp->prev;
        temp->prev=temp->next;
        temp->next = last;
        head = temp;
        temp=temp->prev;
         
    }
  
    return head;
}
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    node*head = vector_to_linked_list(v);
    cout<<"printing linked list : ";
    print_ll(head);

    head= swapping_linked_list(head);
    cout<<"\nafter swapping all the links in doubly linked list: ";
    print_ll(head);
    return 0;
}