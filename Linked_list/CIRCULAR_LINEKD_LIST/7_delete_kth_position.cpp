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
node* delete_kth(node*head,int k ){
        if(head==NULL){
                return NULL;
        }
        node*temp = head;
        int cnt=1;

        node*prev = NULL;
        while(temp->next!=head){
                cnt++;
                prev = temp;
                temp = temp->next;
        }
       
        if(k==1 ){
                if(cnt==1)return NULL;

                node*t = head;
                head = head->next;
                temp->next = head;
                temp->next  =head;
                t->next = NULL;
                delete t;
                return head;
        }else if(k==cnt){
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
                return head;
        }else if(k>cnt || k<=0){
                return head;
        }else{
                prev = NULL;
                temp= head;
                int i=1;
                while(i!=k && temp->next!=head){
                       i++;
                       prev = temp;
                       temp = temp->next;
                }
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
                return head;
        }

        cout<<cnt<<endl;
        return head;
        
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
        int k;
        cout<<"enter k th position : ";
        cin>>k;
        head = delete_kth(head,k);
        cout<<"updated linked list be : ";
        print(head);
       }

        return 0;



}