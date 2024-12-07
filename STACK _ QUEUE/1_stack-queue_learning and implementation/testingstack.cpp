
//////////////////////////////////////////////////////////////////////////////////////////////////
// stack implementation using linked list



// #include<bits/stdc++.h>
// using namespace std;
// class node{
//         public:
//         int data;
//         node*next;

//         node(int d){
//                 this->data=d;
//                 this->next=nullptr;
//         }

// };
// class STACK__LL{
//         private:
//         node*top;
//         int curr_size;


//         public:
//         STACK__LL(){
//                 top=nullptr;
//                 curr_size=0;
//         }
//         bool isempty(){
//                 return curr_size==0;
//         }
//         int size(){
//                 return curr_size;
//         }
//         int peek(){
//                 if(top==nullptr){
//                         return -1;
//                 }
//                 return top->data;
//         }
//         void push(int x){
//                 node*temp=new node(x);
//                 if(top==nullptr){
//                         curr_size++;
//                         cout<<"element " << x<<" has pushed onto the stack"<<endl;
//                         top=temp;
//                         return;
//                 }else{
//                         temp->next = top;
//                         top = temp;
//                         cout<<"element "<< x<<" has pushed onto the stack"<<endl;
//                         curr_size++;
//                         return;
//                 }
//         }
//         void pop(){
//                 if(top==nullptr){
//                         cout<<"stack has no element to pop out "<<endl;
//                         curr_size=0;
//                         return;
//                 }else if(top->next==nullptr){
//                         cout<<"last element "<<top->data<<"  of stack was poop out"<<endl;
//                         curr_size=0;
//                         return;
//                 }else{
//                         node*temp = top;
//                         top=top->next;
//                         temp->next= nullptr;
//                         cout<<"element "<<temp->data<<" has pop out from stack"<<endl;
//                         delete temp;
                        
//                         curr_size--;
//                         return;
//                 }
//         }
// };
// int main(){
//         STACK__LL st;
//         st.push(9);
//         st.push(8);
//          st.push(32);
//           st.push(0);
//            st.push(78);
//             st.push(4);
//              st.push(19);
//              st.pop();
//              st.pop();

//              cout<<st.size()<<endl;
//              cout<<st.peek()<<endl;

//         return 0;
// }









//////////////////////////////////////////////////////////////////////////////////////////////////
// stack implementation using array



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class STACK{
//         private:
//         int *arr;
//         int capacity;
//         int top;

//         public:
//         STACK(int sizee){
//                 capacity=sizee;
//                 top=-1;
//                 arr = new int[sizee];
//         }
//         bool isempty(){
//                 return top==-1;
//         }
//         bool isfull(){
//                 return top+1==capacity;
//         }
//         int size(){
//                 return top+1;
//         }
//         int peek(){
//                 if(top==-1){
//                         return -1;
//                 }
//                 return arr[top];
//         }
//         void push(int x){
//                if(top+1<capacity){
//                 arr[++top]=x;
//                  cout<<"element "<<x<<" has pushed onto stack"<<endl;
//                  return ;
//                }else if(capacity==top+1){
//                 cout<<"STACK OVERFLOW HERE "<<"ELEMENT "<<x<<" CANNOT BE PUSHED ONTO STACK"<<endl;
//                 return;
//                }
//         }
//         void pop(){
//                 if(top==-1){
//                         cout<<"THERE IS NO ELEMENT IN STACK "<<endl;
//                         return ;

//                 }
//                 else{
//                         cout<<"ELEMENT "<<arr[top--]<<" HAS POP OUT FROM STACK"<<endl;
//                         return ;
//                 }
//         }
        

// };
//  int main(){
//         STACK st(15);
//         st.push(9);
//         st.push(8);
//          st.push(32);
//           st.push(0);
//            st.push(78);
//             st.push(4);
//              st.push(19);
//              st.pop();
//              st.pop();

//              cout<<st.size()<<endl;
//              cout<<st.peek()<<endl;

//         return 0;
// }



//////////////////////////////////////////////////////////////////////////////////////////////////
// stack implementation using queue


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class STACK_Q{
        private:
        queue<int>q;

        public:

        int size(){
                return q.size();
        }
        bool isempty(){
                return q.size()==0;
        }
        int peek(){
                if(q.size()==0){
                        return -1;
                }
                else{
                        return q.front();
                }
        }
        void pop(){
                if(q.size()==0){
                        cout<<"THERE IS NO ELEMENT IN STACK TO POP OUT"<<endl;
                        return ;
                }else{
                        cout<<"ELEMENT "<<q.front()<<" HAS POP OUT FROM STACK"<<endl;
                }
        }
        void push(int x){
                cout<<"ELEMENT "<<x<<" HAS PUSHED ONTO STACK"<<endl;
                if(q.size()==0){
                        q.push(x);
                        return;
                }else{
                        int size= q.size();
                        q.push(x);
                        for(int i=1;i<=size;i++){
                                q.push(q.front());
                                q.pop();
                        }
                        return;
                }
        }
};

int main(){
        STACK_Q st;
        st.push(9);
        st.push(8);
         st.push(32);
          st.push(0);
           st.push(78);
            st.push(4);
             st.push(19);
             st.pop();
             st.pop();

             cout<<st.size()<<endl;
             cout<<st.peek()<<endl;

        return 0;
}