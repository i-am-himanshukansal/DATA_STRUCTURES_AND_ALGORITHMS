#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class minstack{
        int mini;
        stack<int>st;
        public:

        minstack(){
                mini = INT_MAX;
        }

        int top(){
                if(st.size()==0){
                        return -1;
                }
                if(st.top()<mini){
                      return mini;  
                }else{
                        return st.top();
                }
        }
        int size(){
                return st.size();
        }
        bool isempty(){
                return st.empty();
        }
        void push(int x){
                if(st.empty()){
                        st.push(x);
                        mini = x;
                }else{
                        if(mini>x){
                                st.push(2*x-mini);
                                mini = x;
                        }else{
                                st.push(x);
                        }
                }
        }

        void pop(){
                if(st.empty()){
                        cout<<"NO ELEMENT IN STACK"<<endl;
                        return;
                }else{
                        if(st.top()<mini){
                                int x = st.top();
                                mini = 2*mini-x;
                        } 
                        st.pop();
                }
        }

        int getMin(){
                if(st.empty()){
                        return -1;
                }
                return mini;
        }




};
int main() {
    minstack minst;

    // Pushing elements onto the stack
    minst.push(30);
    cout << "Pushed: 30, Current min: " << minst.getMin() << endl;

    minst.push(45);
    cout << "Pushed: 45, Current min: " << minst.getMin() << endl;

    minst.push(12);
    cout << "Pushed: 12, Current min: " << minst.getMin() << endl;

    minst.push(78);
    cout << "Pushed: 78, Current min: " << minst.getMin() << endl;

    minst.push(0);
    cout << "Pushed: 0, Current min: " << minst.getMin() << endl;

    // Checking top element and popping
    cout << "Top element: " << minst.top() << endl;
    minst.pop();
    cout << "Popped, Current min: " << minst.getMin() << endl;

    cout << "Top element: " << minst.top() << endl;
    minst.pop();
    cout << "Popped, Current min: " << minst.getMin() << endl;

    cout << "Top element: " << minst.top() << endl;
    minst.pop();
    cout << "Popped, Current min: " << minst.getMin() << endl;

    cout << "Top element: " << minst.top() << endl;
    minst.pop();
    cout << "Popped, Current min: " << minst.getMin() << endl;

    cout << "Top element: " << minst.top() << endl;
    minst.pop();
    cout << "Popped, Stack is now empty!" << endl;

    return 0;
}
