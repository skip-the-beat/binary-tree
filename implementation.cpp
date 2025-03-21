#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node*left;
  Node*right;

  Node(int data){
      this->data=data;
      this->left=NULL;
      this->right=NULL;
  }
};

//Dummy tree for experimentation
Node* dummyTree(Node*root){
  root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->left=new Node(7);
  
  return root;
}

Node*buildTree(Node*newnode){ 
  cout<<"Enter the node data: "<<endl;
  int data;
  cin>>data;
  if(data==-1){
      return NULL;
  }
  newnode=new Node(data);

  cout<<"Enter the node data for left node:"<<data<<endl;
  newnode->left=buildTree(newnode->left);
  cout<<"Enter the node data for right node:"<<data<<endl;
  newnode->right=buildTree(newnode->right);

  return newnode;
}

int main(){
  // Node*newnode=new Node(5);
  // cout<<newnode->data<<endl;
  // cout<<newnode->left<<endl;
  // cout<<newnode->right<<endl;

  Node*root=NULL;
  root=buildTree(root);
return 0;
}
