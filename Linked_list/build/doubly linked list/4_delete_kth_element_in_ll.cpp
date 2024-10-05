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
Node*delete_kth(Node*head,int k){
    if(head==NULL || head->next ==NULL){
        return NULL;
    }
    Node*temp = head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }

    if(cnt<k){
        cout<<"the position ("<<k << ")of element is not valid or exist \n returning actual linked list\n";
        return head;
    }

    if(temp->prev==NULL){
        head=head->next;
        head->prev=nullptr;
        temp->next=nullptr;
        // return head;
    }else if(temp->next==NULL){
        temp->prev->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        // return head;
    }else if(temp->next!=NULL && temp->prev!=NULL){
        temp->prev->next =temp->next;
        temp->next->prev= temp->prev;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        // return head;
    }
    return head;
}


int main(){
    int t;
    cout<<"enter test cases : ";
    cin>>t;
    while(t--){
         vector<int>v={1,23,45,56,89,7,45,56,53,22};
    //   vector<int>v;
        Node*head = array_to_doubly_linkedlist(v);
        cout<<"\nlinked list before delete kth  node"<<" : ";
        print_ll(head);

        int position ;
        cout<<"Enter position to be delete : ";
        cin>>position;
        head = delete_kth(head,position);


        cout<<"linked list after delete kth node"<<" : ";
        print_ll(head);

        //return the prev of the head of the linked list
    }

        return 0;
}