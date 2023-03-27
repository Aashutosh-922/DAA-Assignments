
#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
Node* createtree(){
  int val;
  cin>>val;
  Node*root;
  if(val==-1){
    return NULL;
  }
  root=new Node(val);
  root->left=createtree();
  root->right=createtree();
  return root;
}
void print(Node*root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}
int main()
{
    Node*root=createtree();  
    print(root);
  return 0;
}
