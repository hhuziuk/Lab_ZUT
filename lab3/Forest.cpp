#include "Tree.h"
#include <iostream>
using namespace std;
#include "Forest.h"

Forest::Forest(const int h, const int w) {
    length = h;
    width = w;
    forest = new int* [length];
    for (int i = 0; i < length; i++) {
        forest[i] = new int[width];
        for (int j = 0; j < width; j++) {
            forest[i][j] = 0;
        }
    }
}

Forest::~Forest() {
    for (int i = 0; i < length; i++) {
        delete[] forest[i];
    }
    delete[] forest;

    for (Tree* t : trees) {
        delete t;
    }
    trees.clear();
}

void Forest::addTree(int h, char s, string c, int x, int y) {
    Tree* t = new Tree(h, s, c, x, y);
    trees.push_back(t);

    for (int i = 0; i < t->height; i++) {
        for (int j = 0; j < t->width; j++) {
            int row = i + x;
            int col = j + y;
            if (row >= 0 && row < length && col >= 0 && col < width && t->tab[i][j]) {
                forest[row][col] = trees.size();
            }
        }
    }
}

void Forest::printForest()
{
    int i, j, k;
    for (i = 0; i < length; i++) {
        for (j = 0; j < width; j++) {
            k = forest[i][j];
            if (k && k <= trees.size()) {
                cout << trees[k - 1]->color;
                cout << trees[k - 1]->symbol;
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
        cout << "\033[0m";
    }
}
