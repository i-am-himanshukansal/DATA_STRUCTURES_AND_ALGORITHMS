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

    node* curr = head;

    // Traverse the circular linked list using a `while` loop
    while (true) {
        node* next_node = curr->next;

        // Inner loop to remove all consecutive duplicates of the current node
        while (next_node != head && curr->data == next_node->data) {
            node* temp = next_node;       // Store the duplicate node to delete
            next_node = next_node->next;  // Move next_node to the next element
            curr->next = next_node;       // Bypass the duplicate node
            delete temp;                  // Delete the duplicate node
        }

        // Move to the next unique node
        curr = curr->next;

        // Stop if we looped back to the head
        if (curr == head) {
            break;
        }
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