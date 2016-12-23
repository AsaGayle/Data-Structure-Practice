#pragma once
#include <iostream>
#include <vector>

class Node;
class LinkedList{
private:
    Node *root;

public:
    LinkedList();
    ~LinkedList();//Destructor
    void addNode(int data);
    void addVector(std::vector<int> &arr);
    void traverseList();
};
