#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "Node.h"

int main(){
	LinkedList testList;
	int testData;
	std::vector<int> positiveVector;

	while(testData != -1){
		std::cout << "Please enter an integer: ";
		std::cin >> testData;
		if(testData != -1){positiveVector.push_back(testData);}
	}
	testList.addVector(positiveVector);
	testList.traverseList();
	return 0;
}
