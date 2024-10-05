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
Node* reverse_linkedlist(Node*head){
  stack<int>st;
  Node*temp=head;
  while(temp!=NULL){
    st.push(temp->data);
    temp=temp->next;
  }
  Node*temp2=head;
  while(temp2!=NULL){
    temp2->data=st.top();
    st.pop();
    temp2=temp2->next;
  }
  return head;
  
}
int main(){
vector<int>v={1,2,3,4,5,6,7,8,9,10,11};
  // vector<int>v;
Node*head = array_to_doubly_linkedlist(v);
cout<<"\nlinked list before reversinng the linked list"<<" : ";
print_ll(head); 

head = reverse_linkedlist(head);
cout<<"\nlinked list after reversinng the linked list"<<" : ";
print_ll(head);

return 0;
}