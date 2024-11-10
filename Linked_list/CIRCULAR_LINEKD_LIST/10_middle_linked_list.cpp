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
int middle_linked_list(node*head){
       
        if(head==NULL){
                return -1;
        }

        int cnt = 1;
         node*temp = head->next;
        while(temp!=head){
                 cnt++;
                temp = temp->next;
               
        }
        int mid = (cnt+1)/2;
        int i=1;
        temp = head;
       while(i!=mid){
        temp = temp->next;
        i++;
       }
        return temp->data;
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
        int x = middle_linked_list(head);
        cout<<"middle of the linked list be : "<<x<<endl;
        
        
      }
        return 0;



}