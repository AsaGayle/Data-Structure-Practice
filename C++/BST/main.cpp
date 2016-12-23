#include <iostream>
#include <vector>
#include <string>
#include "BST.h"
#include "Node.h"

using namespace std;

void display_menu();

int main(){
	BST testBST;
	int testData,searchData;
	vector<int> positiveVector;
	display_menu();
	while(testData >= 0 ){
		cout << "Please enter an integer: ";
		cin >> testData;
		if(testData >= 0){positiveVector.push_back(testData);}
	}
	testBST.addVector(positiveVector);
	testBST.traverseBST(testBST.get_root());
	cout << "Enter number to search for: ";
	cin >> searchData;
	testBST.search(searchData);

	return 0;
}

void display_menu(){
	string line = "-----------------------------------------------------------------\n";
	cout << line;
	cout << "Please enter an option shown below" << endl;
	cout << "1. Manually load BST" << endl;
	cout << "2. Load BST from file" << endl;
	cout << "3. Search BST" << endl;
};
