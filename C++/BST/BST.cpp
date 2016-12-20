#include "BST.h"
#include "Node.h"

BST::BST(){
    root = new Node();
    root = NULL;
}

BST::~BST(){
}

void BST::addNode(int nData){
    Node *new_node = new Node(nData);

    if(root == NULL){
        root = new_node;
        return;
    } else{
        Node *current = root;
        bool is_placed = false;
        while(is_placed == false){
            if(current->data < nData){
                if(current->right == NULL){
                    is_placed = true;
                    current->right = new_node;
                } else{
                    current = current->right;
                }
            } else {
                if(current->left == NULL){
                    is_placed = true;
                    current->left = new_node;
                } else{
                    current = current->left;
                }
            }
        }
        return;
    }
}

void BST::addVector(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        addNode(arr[i]);
    }
}

void BST::traverseBST(Node *root){
    if(root == NULL){
        return;
    }
    traverseBST(root->left);
    traverseBST(root->right);
    cout << root->data << endl;
}

Node* BST::get_root(){
    return root;
}