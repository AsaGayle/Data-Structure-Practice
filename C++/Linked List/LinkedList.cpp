#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(){
    this->root = new Node();
    this->root = NULL;
}

LinkedList::~LinkedList(){

}

void LinkedList::addNode(int nData){
    Node *new_node = new Node(nData);

    if(root == NULL){
        this->root = new_node;
        return;
    } else{
        Node *current = root;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = new_node;
    }
}

void LinkedList::addVector(std::vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        addNode(arr[i]);
    }
}

void LinkedList::traverseList(){
    Node *current = root;
    while(current != NULL){
        std::cout << current->data << std::endl;
        current = current->next;
    }
}
