#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int data1) {
        this->data = data1;
        this->next = nullptr;
            }
};

node* vector_to_linked_list(vector<int> v) {
    if (v.size() == 0) {
        return NULL;
    }

    node* head = new node(v[0]);
    node* tail = head;

    for (int i = 1; i < v.size(); i++) {
        node* temp = new node(v[i]);
        tail->next = temp;
        tail = temp;
    }

    return head;
}

node*reverse_by_link_change(node*head){
    if(head==NULL && head->next==nullptr){
        return head;
    }
  
   
    node*prev = head;
    node*temp = head->next;
    node*front = temp->next;
    if(head->next->next==nullptr){
       prev->next = nullptr;
       temp->next = prev;
       head = temp;
       return head;
    }

    while(front->next!=nullptr){
            temp->next = prev;
            prev = temp;
            temp= front;
            front=front->next;
    }
    temp->next = prev;
    front->next = temp;
    head->next = nullptr;
    head = front;
    return head;

}

void print_ll(node* head) {

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
   int t;
   cout<<"enter test cases : ";
   cin>>t;
   while(t--){
     int n;
    cout<<"\n\nenter size of the linked list : ";
    cin>>n;

   vector<int>v;
   cout<<"enter kaise bhi  vector elements : ";
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }

   node*head = vector_to_linked_list(v);
   cout<<"user input linked list be : ";
   print_ll(head);

   head = reverse_by_link_change(head);
   cout<<"\nafter  reverse linked list be : ";
   print_ll(head);
   }
    return 0;
}