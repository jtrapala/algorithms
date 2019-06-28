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

 Node* BST::find(int data, Node* n){
	if(n->data > data){
		find(data, n->left);
	} 
	else if(n->data > data){
		find(data, n->right);
	}
	else if(n->data == data) return n;
 }


 Node* BST::remove(int data, Node* n){
	 
	 if(!n) return nullptr;
	 else if(data < n->data) n->left=remove(data, n->left);
	 else if(data > n->data )n->right=remove(data, n->right);
	 else if(!n->left && !n->right) return;

 }

	/* if(!search(data)) throw "Not found";
	else{

		if(n->left == nullptr && n->right==nullptr) delete(n);
		else if(n->left == nullptr){
			n=n->right;
			delete(n);
		}
		else if(n->right == nullptr){
			n=n->right;
			delete(n);
		}
		else{
			Node *tmp = n;

			n=n->right;

			while(n->left){
				n=n->left;
			}

			n=tmp;

			delete(n);
			
		}
 }*/
 

 void BST::remove(int data){
	remove(data, root);
 }



int BST::height(Node* n){
    return (!n) ? (-1): (1 + (max(height(n->left),height(n->right))));
  }

void BST::clear(Node* n){
	if(n==nullptr) return;
	clear(n->left);
	clear(n->right);	
	delete n;	
  }
 
void BST::preorder(Node *n, std::ostream& oss){
	 if(n==nullptr) return;
    oss << n->data << ", ";
	preorder(n->left, oss);
	preorder(n->right, oss);
    
}

  /** inorder()
   * Recursively prints the contents of the subtree rooted at n to the
   * ostream using an in-order traversal.
   */
void BST::clear(){
    clear(root);
	root=nullptr;
}

void BST::inorder(Node* n, std::ostream& oss){
    if(n==nullptr) return;
    
	inorder(n->left, oss);
	oss << n->data << ", ";
	inorder(n->right, oss);
	
}
void BST::preorder(std::ostream& oss){
	preorder(root, oss);
	//Last
	oss << std::endl;
}
void BST::inorder(std::ostream& oss){
    inorder(root, oss);
	//Last
	oss << std::endl;
}
void BST::postorder(std::ostream& oss){
    postorder(root, oss);
	//Last
	oss << std::endl;
}

  /** postorder()
   * Recursively prints the contents of the subtree rooted at n to the
   * ostream using a post-order traversal.
   */
 void BST::postorder(Node* n, std::ostream& oss){
	if(n==nullptr) return;
    
	postorder(n->left, oss);
	postorder(n->right, oss);
	oss << n->data << ", ";
    
}

