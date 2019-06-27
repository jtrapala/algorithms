#include "BST.hpp"
#include <iostream>

Node* BST::insert(int data, Node* n){
    if(!root){
      Node *ne =new Node(data);
      ne->left=nullptr;
      ne->right=nullptr;
      root=ne;
    }
    if(!n) {
      Node *ne =new Node(data);
      ne->left=nullptr;
      ne->right=nullptr;
      }
    else if(data < n->data) n->left=insert(data, n->left);
    else if (data > n->data) n->right=insert(data, n->right);
    else return n;
   
  }

bool BST::search(int data, Node* n){
    if(!n) return false;
    else if(n->data == data) return true;
    else if(data > n->data) return(search(data, n->right));
    else return search(data, n->left);

  }

 Node* BST::remove(int data, Node* n){
     return n;
  }


int BST::height(Node* n){
    return (!n) ? (-1): (1 + (max(height(n->left),height(n->right))));
  }

void BST::clear(Node* n){
return;
  }
 
void BST::preorder(Node* n, std::ostream& oss){
return;
}

  /** inorder()
   * Recursively prints the contents of the subtree rooted at n to the
   * ostream using an in-order traversal.
   */
void BST::clear(){
    
}

void BST::inorder(Node* n, std::ostream& oss){
    return;
}
void BST::preorder(std::ostream& oss){

}
void BST::inorder(std::ostream& oss){
    
}
void BST::postorder(std::ostream& oss){
    
}

  /** postorder()
   * Recursively prints the contents of the subtree rooted at n to the
   * ostream using a post-order traversal.
   */
 void BST::postorder(Node* n, std::ostream& oss){
return;
}

