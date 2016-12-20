#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Node;
class BST{
private:
    Node *root;
public:
    BST();
    ~BST();//Destructor
    void addNode(int data);
    void addVector(vector<int> &arr);
    void traverseBST(Node *root);
    Node *get_root();
};
