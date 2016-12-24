#include <iostream>
#include <vector>
#include <string>
#include "Stack.h"
#include "Node.h"

#define DEBUG 1
#if DEBUG
    #define LOG(x) std::cout << x << std::endl;
#else
    #define LOG(x)
#endif

int main(){
    Stack testStack = Stack(10);
    int testData = 0;
    std::vector<int> v;

    //TODO:: Create options to create stack with defined size vs infinite stack
    if(testStack.size_defined){
        int count = 0;
        while(testData >= 0 && count < testStack.size){
            std::cout << "Please enter an integer: ";
            std::cin >> testData;
            if(testData >= 0){
                LOG(testData);
                v.push_back(testData);
                count++;
            }
        }

        for(int i=0; i<v.size(); i++){
            testStack.push(v[i]);
        }

    } else{
        if(testStack.empty()){
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    }

    delete testStack;
    return 0;
}
