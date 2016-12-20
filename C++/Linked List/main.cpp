#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main(){
	LinkedList testList;
	int testData;
	vector<int> positiveVector;

	while(testData != -1){
		cout << "Please enter an integer: ";
		cin >> testData;
		if(testData != -1){positiveVector.push_back(testData);}
	}
	testList.addVector(positiveVector);
	testList.traverseList();
	return 0;
}
