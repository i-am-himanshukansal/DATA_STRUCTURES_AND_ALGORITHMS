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

node*remove_duplicates(node*head){
    if(head==NULL && head->next==nullptr){
        return head;
    }
    node*temp = head->next;
    node*last  = head;

    while(temp->next!=nullptr){
        if(temp->data!=last->data){
            last =temp;
            temp=temp->next;
        }else if(temp->data==last->data){
            node*delete_node = temp;
            last->next = temp->next;
            temp=temp->next;
            delete_node->next = nullptr;
            delete delete_node;
        }
    }

        node*tempo = temp;
        if(last->data==temp->data){
            last->next = temp->next;
            delete temp;
        }    
    // if(temp==last){
    //     return head;
    // }else if(temp!=last){
    //     if(temp->data==last->data){
    //         while(last->next==temp){
    //             last=last->next;
    //         }
    //     }
    // }

    return  head;
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
   cout<<"enter sorted vector elements : ";
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }

   node*head = vector_to_linked_list(v);
   cout<<"user input linked list be : ";
   print_ll(head);

   head = remove_duplicates(head);
   cout<<"\nafter removing duplicates linked list be : ";
   print_ll(head);
   }
    return 0;
}