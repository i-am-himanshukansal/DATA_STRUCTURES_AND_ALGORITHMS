#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// q.push(x)
// q.pop()
// q.size()
// q.front()
// q.back()
// q.empty()
// q.full()
class Queue{
        private:
                int start;
                int end;
                int currsize;
                int capacity;
                int *arr;

        public:
                Queue(int size){
                        capacity = size;
                        currsize=0;
                        start = -1;
                        end = -1;
                        arr=new int[size];
                }
        int front(){
                if(currsize==0){
                        return -1;
                }
                return arr[start];
        }
        int back(){
                if(currsize==0){
                        return -1;
                }
                return arr[end];
        }
        int size(){
                return currsize;
        }
        bool isempty(){
                return currsize==0;
        }
        bool isfull(){
                return currsize==capacity;
        }
        void pop(){
                if(currsize==0){
                        cout<<"THERE IS NO ELEMENT IN Q TO be POP out "<<endl;
                        return ;
                }
                int element = arr[start];
                if(currsize==1){
                        start = -1;
                        end = -1;
                        currsize=0;
                        cout<<"element "<<element<<" POPPED out from QUEUE "<<endl;
                }else{
                        start= (start+1)%(capacity);
                        currsize--;
                        cout<<"element "<<element<<" POPPED out from QUEUE "<<endl;
                }
                return ;
               

        }
        void push(int x){
                if(currsize==capacity){
                        cout<<"there is no space to put element "<<x<<"in  queue"<<endl;
                        return;
                }
                

                if(currsize==0){
                        start = 0;
                        end = 0;
                        currsize++;
                        arr[end]=x;
                }else{  
                        end = (end+1)%(capacity);
                        arr[end] = x;
                        currsize++;
                }
                 cout<<"element "<< x<< " pushed onto queue "<<endl;
                 return ;
        }

};
int main(){
        int size;
        cout<<"enter size : ";
        cin>>size;
        Queue q(size);
        q.push(15);
        q.push(45);
        q.push(9);
        q.push(23);
        q.push(457);

        q.pop();
        q.pop();
        q.pop();


        q.front();
        q.back();

        cout<<"size of queue be : "<<q.size()<<endl;
        cout<<"front be : "<<q.front()<<endl;
        cout<<"back be : "<<q.back()<<endl;
        cout<<"empty   : "<<q.isempty()<<endl;
        cout<<"full    : "<<q.isfull()<<endl;
        q.pop();
        q.pop();
        q.pop();
        cout<<"size of queue be : "<<q.size()<<endl;
        cout<<"front be : "<<q.front()<<endl;
        cout<<"back be : "<<q.back()<<endl;
        cout<<"empty   : "<<q.isempty()<<endl;
        cout<<"full    : "<<q.isfull()<<endl;

     
        return 0;
}