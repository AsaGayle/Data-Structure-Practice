#include "Node.h"

Node::Node(){

}

Node::Node(int nData){
    data = nData;
    next = NULL;
}

int Node::get_data(){
    return data;
}
