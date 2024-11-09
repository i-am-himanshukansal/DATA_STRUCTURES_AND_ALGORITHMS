#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class node{
       public:
        int data;
        node*next;

       
        node(int d){
                this->data = d;
                this->next =  NULL;
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
node* createlinkedlist(vector<int>&v){
        if(v.size()==0){
                node*head = NULL;
                return head;
        }else{
                node*head = new node(v[0]);
                node*tail = head;
                tail->next = head;
                for(int i=1;i<v.size();i++){
                        node*temp = new node(v[i]);
                        tail->next = temp;
                        tail = temp;
                        tail->next = head;
                }
                 return head;
        }
       
}
node* delete_at_tail(node*head){
        if(head==NULL || head->next==head){
                return NULL;
        }else{  
                node*prev = NULL;
                node*temp = head;
                while(temp->next!=head){
                        prev = temp;
                        temp = temp->next;
                }
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
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

        node*head = createlinkedlist(v);

        print(head);
        head = delete_at_tail(head);
        cout<<"updated linked list be : ";
        print(head);

        return 0;



}