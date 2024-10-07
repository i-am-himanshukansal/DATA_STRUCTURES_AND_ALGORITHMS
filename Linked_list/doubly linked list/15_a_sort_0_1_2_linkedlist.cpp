//naive method to sort the linekd list
//count no of 0 1 2
//then traverse again to data replacement
//space : O(1)
//time: O(2N)
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

node*sort_0_1_2(node*head){
    int cnt_0 = 0;
    int cnt_1 = 0;
    int cnt_2 = 0;

    node*temp = head;
    while(temp!=NULL){
        if(temp->data==0){
            cnt_0++;
        }else if(temp->data==1){
            cnt_1++;
        }else{
            cnt_2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(cnt_0--){
            temp->data = 0;
            temp=temp->next;
    }
    while(cnt_1--){
            temp->data = 1;
            temp=temp->next;
    }
    while(cnt_2--){
            temp->data = 2;
            temp=temp->next;
    }
    return head;


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

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }

//    vector<int>v;
   node*head = vector_to_linked_list(v);
   cout<<"user input linked list be : : ";
   print_ll(head);

   head = sort_0_1_2(head);
   cout<<"\nafter sort linked list be : : ";
   print_ll(head);

   }


    return 0;
}
