#include <iostream>
#include <vector>
#include <string>
#include "BST.h"
#include "Node.h"

void display_menu();

int main(){
	BST testBST;
	int testData,searchData;
	std::vector<int> positiveVector;
	display_menu();
	while(testData >= 0 ){
		std::cout << "Please enter an integer: ";
		std::cin >> testData;
		if(testData >= 0){positiveVector.push_back(testData);}
	}
	testBST.addVector(positiveVector);
	testBST.traverseBST(testBST.get_root());
	std::cout << "Enter number to search for: ";
	std::cin >> searchData;
	testBST.search(searchData);

	return 0;
}

void display_menu(){
	std::string line = "-----------------------------------------------------------------";
	std::cout << line << std::endl;
	std::cout << "Please enter an option shown below" << std::endl;
	std::cout << "1. Manually load BST" << std::endl;
	std::cout << "2. Load BST from file" << std::endl;
	std::cout << "3. Search BST" << std::endl;
};
