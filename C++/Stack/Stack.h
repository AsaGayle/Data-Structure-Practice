#pragma once
#include <iostream>
using namespace std;

class Node;
class Stack{
    private:
        Node* root;
    public:
        Stack();
        Stack(int nData);
        ~Stack();
        int size;
        int cur_size;
        bool size_defined;
        void push(int data);
        int pop();
        int top();
        bool empty();
        bool full();
};
