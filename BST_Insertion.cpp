#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data=value;
        left=right=NULL;
    };
};

Node*insert(Node*root, int target){
    if(!root){
        Node*temp=new Node(target);
        return temp;
    }
    //for left
    if(target<root->data){
        root->left=insert(root->left,target);
    }
    //for right
    else{
        root->right=insert(root->right,target);
    }
    return root;
}
void PreOrder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
};

void InOrder(Node*root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
};

void PostOrder(Node*root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
};

bool Search(Node*root, int target){
    if(!root){
        return 0;
    }
    if(root->data==target){
        return 1;
    }
    if(root->data>target){
        return Search(root->left,target);
    }
    else{
        return Search(root->right,target);
    }
};
int main()
{
    int arr[]={2,6,3,9,18,24,4,7,26,30};
    int i;
    Node*root=NULL;
    for(i=0;i<10;i++){
        root=insert(root,arr[i]);
    }

    //CODE FOR TRAVERSAL
    cout<<"PreOrder:  ";
    PreOrder(root);

    cout<<"\nPostOrder:  ";
    PostOrder(root);

    cout<<"\nInOrder:  ";
    InOrder(root);

    //SEARCH
    cout<<endl;
    cout<<Search(root,26);
}