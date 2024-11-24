#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
        public:
        int data;
        node*next;

        node(int d){
                this->data = d;
                this->next = nullptr;
        }      
};
class Queue_ll{
private:
        node*front;
        node*back;
        int currsize;

public:
        Queue_ll(){
                front = nullptr;
                back = nullptr;
                currsize  = 0;
        }

        int size(){
                return currsize;
        }
        int get_front(){
                if(currsize==0){
                        return -1;
                }
                return front->data;
        }
        int get_back(){
                if(currsize==0){
                        return -1;
                }
                return back->data;
        }
        bool isempty(){
                return front==nullptr;
        }

        void enqueue(int x){
                node*temp = new node(x);
                if(currsize==0){
                        cout<<"ELEMENT "<<x<<" is ENQUEUE onto the Queue"<<endl;
                        front = temp;
                        back = temp;
                        currsize++;
                        return ;
                }
                        cout<<"ELEMENT "<<x<<" is ENQUEUE onto the Queue"<<endl;
                        back->next = temp;
                        back = temp;
                        currsize++;
                        return;
        }
        void dequeue(){
                if(currsize==0){
                        cout<<"NO ELEMENT IS PRESENT TO DEQUEUE"<<endl;
                        return;
                }
                node*temp = front;
                front = front->next;
                if(front==nullptr){
                        back==nullptr;
                }
                cout<<"ELEMENT "<<temp->data<<" has DEQUEUE from Queue"<<endl;
                temp->next = nullptr;
                delete temp;
                currsize--;
                return ;
        }
};
int main(){

        Queue_ll q;
        q.enqueue(15);
        q.enqueue(45);
        q.enqueue(18);
        q.enqueue(123);


        cout<<"size be : "<<q.size()<<endl;
        cout<<"front be : "<<q.get_front()<<endl;
        cout<<"back be : "<<q.get_back()<<endl;
        cout<<"is empty : "<<q.isempty()<<endl;

        q.dequeue();
        q.dequeue();
        cout<<"size after dequeue be : "<<q.size()<<endl;
        cout<<"front after dequeue be : "<<q.get_front()<<endl;
        cout<<"back after dequeue be : "<<q.get_back()<<endl;
        cout<<"is empty after dequeue : "<<q.isempty()<<endl;


        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();//dequeue




        return 0;
}