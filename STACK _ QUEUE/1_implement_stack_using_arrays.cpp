#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// st.push(x)
// st..pop()
// st.size();
// st.top();
// st.empty();
//st..full();
class STACK{
private:
        int *arr;
        int capacity;
        int top;

public:
        STACK(int size){
                capacity = size;
                arr  = new int[size];
                top = -1;
        }

        bool isempty(){
                return top==-1; //use comparision operator
                                //to return the bool 
        }
        bool isfull(){
                return top ==capacity-1;//use comparision operator
                                //to return the bool 
        }


        int size(){
                return top+1;
        }
        int peek(){
                if(isempty()){
                        return -1;
                }
                return arr[top];
        }
        void resize(){
                capacity *= 2; 
                int *newarr = new int[capacity];
                for(int i=0;i<=top;i++){
                        newarr[i]=arr[i];
                       
                }
                 delete []arr;
                 arr = newarr;
                 cout<<"stack rersize using array"<<capacity<<endl;
        }

        void pop(){
                if(isempty()){
                        cout<<"stack underflow ! , no elements to pop"<<endl;
                        return ;
                }
                // cout<<arr[top--]<<" ";
                top--;
                // cout<<"popped element "<<arr[top--]<<" from the stack"<<endl;
                return ;
        }
        void push(int x){
                if(isfull()){
                        cout<<"stack overflow ! , no space to push the elements"<<endl;
                        resize();
                }
               
                arr[++top] = x;
                cout<<"pushed element "<<x<< " onto the stack"<<endl;
        }

};
int main(){
        STACK st(9);
        st.pop();
        st.push(125);
        st.pop();
        st.push(1);
        st.push(78);
        st.push(7);
        st.push(23);
        st.push(45);
        st.push(72);
        st.push(78);
         st.push(78);
        st.push(7);
        st.push(23);
        st.push(45);
        st.push(72);
        st.push(78);

        st.peek();
        st.size();
        if(st.isempty()){
                cout<<"empty"<<endl;
        }else{
                cout<<"non empty"<<endl;
        }

        while(!st.isempty()){
                cout<<st.peek()<<" ";
                st.pop();
        }



        

        return 0;

}