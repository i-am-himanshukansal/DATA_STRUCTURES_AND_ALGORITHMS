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
        // while(temp!=head){
        //         cout<<temp->data<<" ";
        // }
        // cout<<endl;
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

        node*head = new node(-1);
        node*point = head;
        node*tail = head;
        for(int i =0;i<n;i++){
         node*temp= new node(v[i]);
         tail->next = temp;
         tail = temp;
         tail->next = head;
        }
        if(head->next!=NULL){
                head=head->next;
                tail->next =head;
                point->next = NULL;
                delete point;
        }

        print(head);
        return 0;



}