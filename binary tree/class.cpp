#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* left;node* right;
    int data;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};


int main()
{
    node * root= new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(7); 
    root->right->left=new node(6);

return 0;
}