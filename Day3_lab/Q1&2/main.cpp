#include <iostream>

using namespace std;
/**********Q1(Linear Search on Array)**************************/
void linearSearchAll(int* items, int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (items[i] == target) {
            cout << "Found at index: " << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Target not found!" << endl;
    }
}
/**********Q2(Binary Search on Array)**************************/

int binarySearchAll(int* items, int size, int target) {
    int start = 0, end = size - 1, mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (items[mid] == target) {
            return mid; // Return the first occurrence
        } else if (items[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    cout<< "-------Q1: linear Search on Array------"<<endl;
    int arr[6] = {5, 3, 7, 3, 9, 3};
    linearSearchAll(arr, 6, 3);
    linearSearchAll(arr, 6, 10);

    cout<< "-------Q2: Binary Search on Array------"<<endl;
    int sortedArr[6] = {1, 3, 3, 7, 9, 11};
    int index = binarySearchAll(sortedArr, 6, 7);
    index != -1 ? cout << "Found at index: " << index << endl : cout << "Not Found" << endl;


    return 0;
}
