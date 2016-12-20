#include <iostream>
#include <vector>
#include "BST.h"
#include "Node.h"

using namespace std;

int main(){
	BST testBST;
	int testData;
	vector<int> positiveVector;

	while(testData != -1){
		cout << "Please enter an integer: ";
		cin >> testData;
		if(testData != -1){positiveVector.push_back(testData);}
	}
	testBST.addVector(positiveVector);
	testBST.traverseBST(testBST.get_root());
	return 0;
}
