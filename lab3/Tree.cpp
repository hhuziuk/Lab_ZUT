#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(int h, char s, string c, int l, int w) {
    x = l;
    y = w;
    height = h;
    width = height * 2 + 1;
    symbol = s;

    if (c == "red") color = "\033[1;31m";
    else if (c == "green") color = "\033[0;32m";
    else if (c == "magenta") color = "\033[1;35m";
    else if (c == "cyan") color = "\033[1;36m";
    else if (c == "yellow") color = "\033[1;33m";
    else if (c == "blue") color = "\033[1;34m";
    else color = "\033[0m";

    tab = new int* [height];
    for (int i = 0; i < height; i++) {
        tab[i] = new int[width];
        for (int j = 0; j < width; j++) {
            if (j >= height - i - 1 && j <= height + i - 1) {
                tab[i][j] = 1;
            }
            else {
                tab[i][j] = 0;
            }
        }
    }
}

Tree::~Tree() {
    if (tab != nullptr) {
        for (int i = 0; i < height; i++) {
            delete[] tab[i];
        }
        delete[] tab;
        tab = nullptr;
    }
}
