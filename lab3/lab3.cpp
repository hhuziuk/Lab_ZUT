#include "Tree.h"
#include <iostream>
using namespace std;
#include "Forest.h"

int main() {
	Forest f(30, 30);

	f.addTree(3, '+', "red", 2, 2);
	f.addTree(5, '&', "green", 3, 8);
	f.addTree(5, '&', "cyan", 10, 8);
	f.addTree(8, '*', "magenta", 10, 18);
	f.addTree(6, '@', "blue", 3, 5);
	f.addTree(10, 'A', "magenta", 15, 15);
	f.printForest();

	return 0;
}
