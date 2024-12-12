#include <iostream>



using namespace std;



void rotateArray(int arr[], int n) {

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {

        arr[i] = arr[i - 1];

    }

    arr[0] = last;

}



int main() {

    int arr[] = {5, 4, 6, 8, 1};

    int n = sizeof(arr) / sizeof(arr[0]);



    rotateArray(arr, n);

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;



    return 0;

}
