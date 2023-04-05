#pragma once
#include "tree.h"
#include <vector>

class Forest {
private:
	vector<Tree*> trees;
	int** forest;
	int length, width;

public:
	Forest(const int h, const int w);
	~Forest();
	void addTree(int h, char s, string c, int x, int y);
	void printForest();
};

