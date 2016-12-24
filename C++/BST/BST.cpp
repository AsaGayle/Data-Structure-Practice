#include "BST.h"
#include "Node.h"

BST::BST(){
    this->root = new Node();
    this->root = NULL;
}

BST::~BST(){
}

void BST::addNode(int nData){
    Node *new_node = new Node(nData);

    if(root == NULL){
        this->root = new_node;
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

void BST::addVector(std::vector<int> &arr){
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
    std::cout << root->data << std::endl;
}

void BST::search(int num){
    Node* current = root;
    bool found = false;
    while(current != NULL){
        if(current->data == num){
            found = true;
            current = NULL;
        }else{
            if(current->data < num){
                current = current->right;
            } else{
                current = current->left;
            }
        }

    }

    if(found == true){
        std::cout << "Number is in tree" << std::endl;
    } else {
        std::cout << "Number not found in tree" << std::endl;
    }
}

Node* BST::get_root(){
    return root;
}
