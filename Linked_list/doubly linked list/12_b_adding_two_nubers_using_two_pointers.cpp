#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;

    node(int data1) {
        this->data = data1;
        this->next = nullptr;
        this->prev = nullptr;
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
        temp->prev = tail;
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

int num(node* head1,node*head2) {
    node* temp1 = head1;
    node* temp2 = head2;

    int sum = 0;
    int factor = 1;
    while(temp1!=NULL && temp2!=NULL){
        sum+= (temp1->data+temp2->data)*factor;
        factor*=10;
        temp1=temp1->next;
        temp2=temp2->next;
    }

    while(temp1!=NULL){
        sum+= (temp1->data)*factor;
        factor*=10;
        temp1=temp1->next;
    }
     while(temp2!=NULL){
        sum+= (temp2->data)*factor;
        factor*=10;
        temp2=temp2->next;
    }

    return sum;
}

node* number_to_linkedlist(int n) {
    if (n == 0) {
        node* head = new node(0);
        return head;
    }

    node* head = new node(n % 10);
    n = n / 10;
    node* tail = head;

    while (n != 0) {
        int element = n % 10;
        node* temp = new node(element);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        n /= 10;
    }

    return head;
}

int main() {
    vector<int> v1 = {1, -22, 4,4,5,6};
    node* head1 = vector_to_linked_list(v1);
    cout << "\nPrinting linked list 1: ";
    print_ll(head1);

    vector<int> v2 = {4, 5, 6};
    node* head2 = vector_to_linked_list(v2);
    cout << "\nPrinting linked list 2: ";
    print_ll(head2);

    
    int final_sum = num(head1,head2);
    cout << "\nFinal sum of the two linked lists: " << final_sum;

    node* head_final = number_to_linkedlist(final_sum);

    cout << "\nFinal linked list representing the sum: ";
    print_ll(head_final);

    return 0;
}
