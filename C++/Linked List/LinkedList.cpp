#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(){
    root = new Node();
    root = NULL;
}

LinkedList::~LinkedList(){

}

void LinkedList::addNode(int nData){
    Node *new_node = new Node(nData);

    if(root == NULL){
        root = new_node;
        return;
    } else{
        Node *current = root;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = new_node;
    }
}

void LinkedList::addVector(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        addNode(arr[i]);
    }
}

void LinkedList::traverseList(){
    Node *current = root;
    while(current != NULL){
        cout << current->data << endl;
        current = current->next;
    }
}
