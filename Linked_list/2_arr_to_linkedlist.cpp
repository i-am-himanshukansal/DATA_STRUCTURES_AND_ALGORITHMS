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

    int n;
    cout<<"enter size of the elemenets : ";
    cin>>n;
    vector<int>arr;
    cout<<"enter elements in the given vector v : ";
    for(int i=0;i<n;i++){
        int x;      
        cin>>x;
        arr.push_back(x);
    }
    Node*head = convert_arr_2_LL(arr);
    Node*temp=head;

    while(temp->next!=nullptr){
    cout<<temp->data<<" ";
    temp = temp->next;
    }


    return 0;
 }