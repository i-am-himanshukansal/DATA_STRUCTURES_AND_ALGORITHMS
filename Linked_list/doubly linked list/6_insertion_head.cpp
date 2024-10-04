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
Node*add_element_at_head(Node*head,int x){
    Node*temp = head;
    Node*newnode = new Node(x);
    head->prev = newnode;
    newnode->next = temp;
    head = newnode;
    return head;
}

int main(){
vector<int>v={1,23,45,56,89,7,45,56,53,22};
//   vector<int>v;
Node*head = array_to_doubly_linkedlist(v);
cout<<"\nlinked list before delete the  node"<<" : ";
print_ll(head); 
int x;
cout<<"enter value to insert : ";
cin>>x;
head = add_element_at_head(head , x);
cout<<"\nlinked list after delete the  node"<<" : ";
print_ll(head);

return 0;
}