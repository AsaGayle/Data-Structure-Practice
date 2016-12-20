#include "Node.h"

Node::Node(){

}

Node::Node(int nData){
    data = nData;
    left = NULL;
    right = NULL;
}

int Node::get_data(){
    return data;
}
