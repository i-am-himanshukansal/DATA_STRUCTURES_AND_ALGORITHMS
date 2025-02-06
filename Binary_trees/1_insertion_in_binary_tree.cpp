#include<bits/stdc++.h>
using namespace std;
struct Node{
public:

        int data;
        Node*left;
        Node*right;
        Node(int d){
                this->data = d;
                this->left = nullptr;
                this->right = nullptr;
        }
};
Node*insertion_in_binary_tree(Node*root,int key){
        Node*insrt = new Node(key);
        if(root==nullptr){
                root=insrt;
                return root;
        }
        queue<Node*>q;
        q.push(root);

        while(!(q.empty())){
               Node*curr = q.front();
               q.pop();

               if(curr->left)q.push(curr->left);
               else{
                curr->left = insrt;
                return root;
               }
               if(curr->right)q.push(curr->right);
               else{
                curr->right = insrt;
                return root;
               }
        }
        return root;
}
void inorder_traversal(Node*root){
        if(root==nullptr)return;

        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
}
int main(){
        Node*root = new Node(10);
        root->left = new Node(11);
        root->right = new Node(9);
        root->left->left = new Node(7);
        root->right->left = new Node(15);
        root->right->right = new Node(8);

        cout<<"before insertion of 100 in binary tree : ";
        inorder_traversal(root);
        cout<<"\nINSERTION PROCESS IS NOW START ----------- "<<endl;
        cout<<"AFTER INSERTION OF 100 IN BINARY TREE : ";
        root = insertion_in_binary_tree(root,100);
        inorder_traversal(root);
        return 0;
}