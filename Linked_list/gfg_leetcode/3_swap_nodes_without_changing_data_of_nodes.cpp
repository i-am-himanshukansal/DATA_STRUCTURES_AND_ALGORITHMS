#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    // Dummy node to help with edge cases
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* curr = dummy;

    while (curr->next && curr->next->next) {
        ListNode* first = curr->next;
        ListNode* second = curr->next->next;

        // Swapping
        first->next = second->next;
        second->next = first;
        curr->next = second;

        // Move to the next pair
        curr = first;
    }

    head = dummy->next;
    delete dummy; // Clean up the dummy node
    return head;
}

// Helper function to create a linked list
ListNode* createList(std::initializer_list<int> values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : values) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    ListNode* head = createList({1, 2, 3, 4});
    std::cout << "Original List: ";
    printList(head);

    head = swapPairs(head);
    std::cout << "Swapped List: ";
    printList(head);
    return 0;
}
