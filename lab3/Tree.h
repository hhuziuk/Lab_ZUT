#pragma once
#include <iostream>
#include <string>
using namespace std;

class Forest;

class Tree {
public:
	int height;
	int width;
	string color;
	char symbol;
	int x, y;
	int** tab;
	Tree(int h, char s, string c, int l, int w);
	~Tree();

	friend class Forest;
};

