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

node*sorted_inserting(node*head,int x){
        node*temp =new node(x);
        if(head==NULL){
                temp->next = temp;
                return temp;
        }else{  
                node*prev = NULL;
                node*curr = head;
                while(curr->data<=temp->data && curr->next!=head){
                        prev = curr;
                        curr = curr->next;
                }
                if(curr==head){
                        node*tail = head;
                        while(tail->next!=head){
                                tail = tail->next;
                        }
                        if(tail==head){
                                if(temp->data<head->data){
                                        temp->next = head;
                                        head->next = temp;
                                        head = temp;
                                }else{
                                        temp->next = head;
                                        head->next = temp;
                                        
                                }
                                return head;
                        }
                        temp->next=tail->next;
                        tail->next = temp;
                        head = temp;
                        return head;
                }else{
                                if(curr->next==head &&curr->data<=temp->data){
                                        temp->next = head;
                                        curr->next= temp;
                                        
                                }else{
                                        temp->next = curr;
                                        prev->next = temp;
                                        
                                }
                                return head;
                }
                curr->next=temp;
                temp->next =head;
                return temp;
        }
        
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
        int x;
        cout<<"enter data to be inserted : ";
        cin>>x;
        head = sorted_inserting(head,x);
        cout<<"updated linked list be : ";
        print(head);

        return 0;



}