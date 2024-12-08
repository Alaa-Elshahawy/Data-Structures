#include <iostream>
#include "Tree.h"
using namespace std;

int main() {
    Tree tr;
    tr.add(20);
    tr.add(50);
    tr.add(15);
    tr.add(10);
    tr.add(30);

    cout << "Tree Depth: " << tr.getDepth() << endl; // Example: should return 3
    return 0;
}
