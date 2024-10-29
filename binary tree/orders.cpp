#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node *left;
    node *right;
    node(int x){
        val=x;
        right=NULL;
        left=NULL;
    } 
};
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(node * root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main()
{
    node * root= new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(7); 
    root->right->left=new node(6);

    cout<<"Preorder: ";preorder(root);cout<<endl;
    cout<<"Inorder: ";inorder(root);cout<<endl;
    cout<<"Postorder: ";postorder(root);cout<<endl;

return 0;
}