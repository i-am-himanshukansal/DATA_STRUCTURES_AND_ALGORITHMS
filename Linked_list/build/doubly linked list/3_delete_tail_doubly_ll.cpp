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

Node*delete_tail(Node*head){
    if(head==NULL || head->next == nullptr){
        cout<<"this linked list is empty or single elemented linked list : ";
        return NULL;
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"tail->prev->next before delete : " <<temp->prev->next<<" " <<temp->prev->next->data<<" \n";
    temp->prev->next = nullptr;
    cout<<"tail->prev->next after connectin to null : "<< temp->prev->next<<" " <<temp->data<<" ";
    temp->prev=nullptr;
    delete temp;
    cout<<"\ndata of temp after delete : "<<temp->next;
    return head;


}
int main(){
     vector<int>v={1,23,45,56,89,7,45,56,53,22};
    //   vector<int>v;
        Node*head = array_to_doubly_linkedlist(v);
        cout<<"\nlinked list before delete tail node"<<" : ";
        print_ll(head);

        head = delete_tail(head);
        cout<<"\nlinked list after delete tail node"<<" : ";
        print_ll(head);

        //return the prev of the head of the linked list

        return 0;
}