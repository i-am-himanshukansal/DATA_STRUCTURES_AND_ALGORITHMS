    #include<bits/stdc++.h>
    using namespace std;
    class Node{
        public:
        int data;
        Node* next;
        Node(int data1, Node*next1){
            data=data1;
            next=next1;
        }
        Node(int data1){
            this->data=data1;
            this->next=nullptr;
        }
    };

    Node* array_TO_linkedlist(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node* tail = head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }
    return head;
    }

    void print_ll(Node*head){
        Node*temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    Node*delete_node(Node*head,int x){


            if (head == nullptr) {
            cout << "The list is empty" << endl;
            return head;
        }
            Node*temp = head;
            if(temp->data==x){
                    head=head->next;
                    delete temp;
                    return head;
            }
            while(temp->next!=nullptr  && temp->next->data!=x ){
                temp=temp->next;
            }
            if(temp->next!=nullptr){
                Node*sample=temp->next;
            temp->next = sample->next;
            sample->next=nullptr;
            delete sample;
            }else{
                cout<<"there is no element present in the linked list";
            }

            return head;

    }

    int main(){
        vector<int>v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        Node*head = array_TO_linkedlist(v);
        int val;
        cout<<"enter value for node  to be detele : ";
        cin>>val;
        head = delete_node(head,val);

        print_ll(head);
        return 0;
    }