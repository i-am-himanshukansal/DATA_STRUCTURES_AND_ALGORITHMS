#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
    public:
        node* next;
        int data;

        node(int val){
            this->data = val;
            this->next = nullptr;
        }
};

class Stack_ll{
    private:
        node* top;
        int currsize;

    public:
        Stack_ll(){
            top = nullptr;
            currsize = 0;
        }

        int getTop() { // Renamed from 'top' to 'getTop'
            if (top == nullptr) {
                return -1;
            }
            return top->data;
        }

        int size() {
            return currsize;
        }

        bool empty() {
            return top == nullptr;
        }
        
        void push(int x){
            node* temp = new node(x);
            if(top == nullptr){
                top = temp;
                currsize++;
                return;
            }
            temp->next = top;
            top = temp;
            currsize++;
        }

        void pop(){
            if(top == nullptr){
                cout << "NO ELEMENT IN STACK TO POP OUT " << endl;
                currsize = 0;
                return ;
            }
            node* temp = top;
            top = top->next;
            temp->next = nullptr;
            delete temp;
            currsize--;
        }
};

int main(){
    Stack_ll st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack size: " << st.size() << endl;

    cout << "Top element: " << st.getTop() << endl;  

    st.pop();
    cout << "Stack size after pop: " << st.size() << endl;
    cout << "Top element after pop: " << st.getTop() << endl;

    return 0;
}
