#include "Stack.h"
#include "Node.h"

//Creates stack with unlimited size
Stack::Stack(){
    root = new Node();
    root = NULL;
};

//Creates stack with set size
Stack::Stack(int input_size){
    root = new Node();
    root = NULL;
    size = input_size;
    size_defined = true;
    cur_size = 0;
};

Stack::~Stack(){

}
//
void Stack::push(int nData){
    if(size_defined == true && cur_size < size){
        Node* new_node = new Node(nData);
        new_node->next = root;
        root = new_node;
        std::cout << "PUSHED " << nData << std::endl;

    } else if(size_defined == false){
        Node* new_node = new Node(nData);
        new_node->next = root;
        root = new_node;
        std::cout << "PUSHED " << nData << std::endl;
    } else {
        std::cout << "ERROR: Stack size exceeded. Can not push data to stack" << std::endl;
    }
}

int Stack::top(){
    return root->data;
}
