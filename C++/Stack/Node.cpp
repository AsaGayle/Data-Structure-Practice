#include "Node.h"

Node::Node(){

}

Node::Node(int nData){
    this->data = nData;
    this->next = NULL;
}

int Node::get_data(){
    return data;
}
