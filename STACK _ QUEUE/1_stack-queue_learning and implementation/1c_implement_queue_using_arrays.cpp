#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Operations: enqueue, dequeue, getSize, getFront, getBack, isEmpty, isFull
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
            currsize = 0;
            start = -1;
            end = -1;
            arr = new int[size];
        }
        
        int getFront(){
            if(currsize == 0){
                return -1;
            }
            return arr[start];
        }
        
        int getBack(){
            if(currsize == 0){
                return -1;
            }
            return arr[end];
        }
        
        int getSize(){
            return currsize;
        }
        
        bool isEmpty(){
            return currsize == 0;
        }
        
        bool isFull(){
            return currsize == capacity;
        }
        
        void dequeue(){
            if(currsize == 0){
                cout << "THERE IS NO ELEMENT IN QUEUE TO BE DEQUEUED" << endl;
                return;
            }
            int element = arr[start];
            if(currsize == 1){
                start = -1;
                end = -1;
                currsize = 0;
            } else {
                start = (start + 1) % capacity;
                currsize--;
            }
            cout << "Element " << element << " DEQUEUED from QUEUE" << endl;
        }
        
        void enqueue(int x){
            if(currsize == capacity){
                cout << "There is no space to enqueue element " << x << " in the queue" << endl;
                return;
            }

            if(currsize == 0){
                start = 0;
                end = 0;
            } else {  
                end = (end + 1) % capacity;
            }
            arr[end] = x;
            currsize++;
            cout << "Element " << x << " ENQUEUED onto QUEUE" << endl;
        }
};

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    Queue q(size);
    
    q.enqueue(15);
    q.enqueue(45);
    q.enqueue(9);
    q.enqueue(23);
    q.enqueue(457);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Queue size: " << q.getSize() << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Back element: " << q.getBack() << endl;
    cout << "Is queue empty? " << q.isEmpty() << endl;
    cout << "Is queue full? " << q.isFull() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Queue size: " << q.getSize() << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Back element: " << q.getBack() << endl;
    cout << "Is queue empty? " << q.isEmpty() << endl;
    cout << "Is queue full? " << q.isFull() << endl;

    return 0;
}
