#include <iostream>
#include <vector>

using namespace std;

void segregate0and1(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void segregateEvenAndOdd(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        while (arr[left] % 2 == 0 && left < right) {
            left++;
        }
        while (arr[right] % 2 != 0 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> arr1 = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    segregate0and1(arr1);
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2 = {3, 4, 5, 7, 8};
    segregateEvenAndOdd(arr2);
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
