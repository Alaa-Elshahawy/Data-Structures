#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack stk;
    stk.push(10) ? cout << "Data Entered\n" : cout << "Data Not Entered\n";
    stk.push(20) ? cout << "Data Entered\n" : cout << "Data Not Entered\n";
    stk.push(30) ? cout << "Data Entered\n" : cout << "Data Not Entered\n";

    int data = 0;
    stk.peek(data) ? cout << "Peek Success: " << data << endl : cout << "Peek Failed\n";

    stk.display();

    while (stk.pop(data)) {
        cout << "POP Success: " << data << endl;
    }

    stk.display();
    return 0;
}
