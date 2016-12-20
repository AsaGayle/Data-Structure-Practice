#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Node;
class LinkedList{
private:
    Node *root;

public:
    LinkedList();
    ~LinkedList();//Destructor
    void addNode(int data);
    void addVector(vector<int> &arr);
    void traverseList();
};
