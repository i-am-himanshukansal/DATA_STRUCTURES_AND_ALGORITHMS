#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int x){
        this->data = x;
        this->left = NULL;
        this->right   = NULL;
    }

};
node*buildtree(node*root){
        cout<<"enter the data : ";
        int data;
        cin>>data;
        root = new node(data);
        if(data==-1){
            return NULL;
        }
        cout<<"enter data for inserting in left of : "<<data<<endl;
        root->left = buildtree(root->left);

        cout<<"enter data for inserting in right of : "<<data<<endl;
        root->right = buildtree(root->right);

        return root;

}
// void print_binarytree(node*root){

//     if( )

// }
int main(){
    node*root = NULL;
    root = buildtree(root);

    // print_binarytree(root);
    return 0 ;
}
