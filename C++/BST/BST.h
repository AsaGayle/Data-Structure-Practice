#pragma once
#include <iostream>
#include <vector>

class Node;
class BST{
private:
    Node *root;
public:
    BST();
    ~BST();//Destructor
    void addNode(int data);
    void addVector(std::vector<int> &arr);
    void traverseBST(Node *root);
    void search(int num);
    Node *get_root();
};
