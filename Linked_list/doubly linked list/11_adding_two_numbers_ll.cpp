#include<bits/stdc++.h>
using namespace std;

// Class definition for a doubly linked list node
class node {
    public:
    int data;
    node* next;  // Pointer to the next node
    node* prev;  // Pointer to the previous node

    // Constructor to initialize a node with given data
    node(int data1) {
        this->data = data1;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// Function to convert a vector of integers into a doubly linked list
node* vector_to_linked_list(vector<int> v) {
    // If the vector is empty, return NULL
    if (v.size() == 0) {
        return NULL;
    }

    // Create the head node with the first element of the vector
    node* head = new node(v[0]);
    node* tail = head;

    // Loop through the rest of the vector and create nodes
    for (int i = 1; i < v.size(); i++) {
        node* temp = new node(v[i]);  // Create a new node
        tail->next = temp;  // Link the current node to the next
        temp->prev = tail;  // Set the previous link
        tail = temp;  // Move the tail pointer to the new node
    }

    return head;  // Return the head of the linked list
}

// Function to print a doubly linked list
void print_ll(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";  // Print the current node's data
        temp = temp->next;  // Move to the next node
    }
}

// Function to convert a linked list into a number
int num(node* head) {
    node* temp = head;
    int sum = 0;
    int factor = 1;

    // Traverse the linked list and calculate the number
    while (temp != NULL) {
        sum += (temp->data) * factor;  // Add the current node's data multiplied by the factor (power of 10)
        factor *= 10;  // Increase the factor by multiplying it by 10
        temp = temp->next;  // Move to the next node
    }

    return sum;  // Return the final number
}

// Function to convert a number into a doubly linked list
node* number_to_linkedlist(int n) {
    // If the number is 0, create a single node with value 0
    if (n == 0) {
        node* head = new node(0);
        return head;
    }

    // Create the head node with the last digit of the number
    node* head = new node(n % 10);
    n = n / 10;
    node* tail = head;

    // Loop through the number, extracting digits and creating nodes
    while (n != 0) {
        int element = n % 10;  // Get the last digit
        node* temp = new node(element);  // Create a new node with the extracted digit
        tail->next = temp;  // Link the current tail to the new node
        temp->prev = tail;  // Set the previous pointer of the new node
        tail = temp;  // Move the tail pointer to the new node
        n /= 10;  // Remove the last digit from the number
    }

    return head;  // Return the head of the linked list
}

int main() {
    // Create the first vector of digits and convert it to a linked list
    vector<int> v1 = {1, 2, 3};
    node* head1 = vector_to_linked_list(v1);
    cout << "\nPrinting linked list 1: ";
    print_ll(head1);

    // Create the second vector of digits and convert it to a linked list
    vector<int> v2 = {4, 5, 6};
    node* head2 = vector_to_linked_list(v2);
    cout << "\nPrinting linked list 2: ";
    print_ll(head2);

    // Convert both linked lists into numbers
    int num1 = num(head1);
    int num2 = num(head2);

    // Calculate the sum of the two numbers
    int final_sum = num1 + num2;
    cout << "\nFinal sum of the two linked lists: " << final_sum;

    // Convert the sum back into a linked list
    node* head_final = number_to_linkedlist(final_sum);

    // Print the linked list representing the sum of the two numbers
    cout << "\nFinal linked list representing the sum: ";
    print_ll(head_final);

    return 0;
}
