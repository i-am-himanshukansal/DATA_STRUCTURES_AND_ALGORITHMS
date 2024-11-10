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
node* remove_duplicates(node* head) {
    if (head == NULL || head->next == head) {
        return head; // No duplicates if the list is empty or has only one node
    }
    node*prev  = NULL;
    node* curr = head;

    while(curr->next!=head){
        prev = curr;
        curr= curr->next;

        while(prev->data == curr->data && curr->next!=head){
                node*temp = curr;
                curr= curr->next;
                prev->next = curr;
                temp->next = NULL;
                delete temp;
        }

    }
    if(curr->data==prev->data){
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }


    return head;
}

node* createlinkedlist(vector<int>&v){
        if(v.size()==0){
                return NULL;
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
int main(){

       
      int t;
      cout<<"enter test cases : ";
      cin>>t;
      while(t--){
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
        head = remove_duplicates(head);
        cout<<"updated linked list be  : ";
        print(head);
        
        
      }
        return 0;



}