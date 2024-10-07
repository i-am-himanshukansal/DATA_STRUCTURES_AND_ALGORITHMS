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

void print_ll(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node*odd_even_linked_list(node*head){

        if(head==NULL || head->next ==nullptr){
            return head;
        }

        node*odd = head;
        node*even = head->next;
        node*even_head = even;

        while(odd->next !=NULL && odd->next->next!=NULL && even->next!=NULL &&even->next->next!=NULL){
            node*odd_curr = odd->next->next;
            node*even_curr = even->next->next;


            odd->next = odd_curr;
            odd=odd_curr;

            even->next = even_curr;
            even=even_curr;

        }
        while(odd->next !=NULL && odd->next->next!=NULL ){
                node*odd_curr = odd->next->next;
                odd->next=odd_curr;
                odd = odd_curr;
            }
        while(even->next !=NULL && even->next->next!=NULL ){
                node*even_curr = even->next->next;
                even->next=even_curr;
                even = even_curr;
            }
        odd->next = even_head;
        even->next = nullptr;
        return head;
}

int main() {
   int t;
   cout<<"enter test cases : ";
   cin>>t;
   while(t--){
     int n;
    cout<<"\nenter size of the linked list : ";
    cin>>n;

   vector<int>v;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }

//    vector<int>v;
   node*head = vector_to_linked_list(v);
   cout<<"\ngiven linked list : ";
   print_ll(head);

   head = odd_even_linked_list(head);
   cout<<"\nodd_even linked list : ";
   print_ll(head);

   }


    return 0;
}
