#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr);
    int target = 5;
    int left = 0;
    int right = size - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // int mid = (left + right) / 2;
        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (result != -1) {
        cout << "Element found at index: " <<result <<endl;
    } else {
        cout << "Element not found." <<endl;
    }
    return 0;
}