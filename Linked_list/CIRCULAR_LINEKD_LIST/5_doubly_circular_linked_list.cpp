#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class node{
       public:
        int data;
        node*next;
        node*prev;

       
        node(int d){
                this->data = d;
                this->next =  NULL;
                this->prev =  NULL;
        }
};
void print(node*head){
        node*temp = head;
        do{
                cout<<temp->data<<" ";
                temp= temp->next;
        }while(temp!=head);
        cout<<endl;
}
void printing(node*tail){
        node*temp = tail;
        do{
                cout<<temp->data<<" ";
                temp= temp->prev;
        }while(temp!=tail);
        cout<<endl;
}
node* create_doubly_linkedlist(vector<int>&v){
        if(v.size()==0){
                node*head = NULL;
                return head;
        }else{
                node*head = new node(v[0]);
                node*tail = head;
                head->prev = tail;
                tail->next = head;
                for(int i=1;i<v.size();i++){
                        node*temp = new node(v[i]);
                        tail->next = temp;
                        temp->prev= tail;
                        tail = temp;
                        
                        head->prev = tail;
                        tail->next = head;
                }
                 return head;
        }   
}
int main(){

       
        int n;
        cout<<"enter n = ";
        cin>>n;

        vector<int>v;
        cout<<"enter elements for linked list : ";
        for(int i=0;i<n;i++){
                int x;
                cin>>x;
                v.push_back(x);
        }

        node*head = create_doubly_linkedlist(v);
        node*tail = head;
        while(tail->next!=head){
                tail = tail->next;
        }
        
        print(head);
        printing(tail);
        // head = create_doubly_linkedlist(head);
        // cout<<"updated linked list be : ";
        // print(head);
        return 0;
}