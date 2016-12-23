#include <iostream>
#include <vector>
#include <string>
#include "Stack.h"
#include "Node.h"

int main(){
    Stack testStack;
    int testData = 0;
    std::vector<int> v;

    //TODO:: Create options to create stack with defined size vs infinite stack
    if(testStack.size_defined){
        int count = 0;
        while(testData >= 0 && count < testStack.size){
            std::cout << "Please enter an integer: ";
            std::cin >> testData;
            if(testData >= 0){
                v.push_back(testData);
                count++;
            }
        }

        for(int i=0; i<v.size(); i++){
            testStack.push(v[i]);
        }

    } else{

    }

    return 0;
}
