#include <iostream>

using namespace std;
#include "LinkedList.h"


int main()
{

   LinkedList mylist;

    mylist.add(10);
    mylist.add(20);
    mylist.add(30);
    mylist.display();  // Output: 10    20    30

    mylist.InsertAfter(25, 20);
    mylist.display();  // Output: 10    20    25    30

    mylist.InsertBefore(15, 10);
    mylist.display();  // Output: 15    10    20    25    30

    cout << "Total Nodes: " << mylist.GetCount() << endl; // Output: Total Nodes: 5

    cout << "Data at index 2: " << mylist.GetDataByIndex(2) << endl; // Output: Data at index 2: 20
    cout << "Data at index 5: " << mylist.GetDataByIndex(5) << endl; // Output: Index 5 out of range.


    return 0;
}
