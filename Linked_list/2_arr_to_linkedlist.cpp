 #include<bits/stdc++.h>
 using namespace std;
 class Node{
    public:
    int data;
    Node* next;
        Node(int data1){
            data=data1;
            next=nullptr;
        }
      
 };
   Node* convert_arr_2_LL(vector<int>&arr){
            Node* head = new Node(arr[0]);
            Node* tail = head;
            for(int i=1;i<arr.size();i++){
                Node*temp = new Node(arr[i]);
                tail->next = temp;
                tail = temp;
                
            }
            return head;
        }
 
 
 int main(){

    vector<int>arr={1,2,2,3,2,5,6,7,8,9,10};
    Node*head = convert_arr_2_LL(arr);
    while(head->next!=nullptr){
    cout<<head->data<<" ";
    head = head->next;
    }


    return 0;
 }