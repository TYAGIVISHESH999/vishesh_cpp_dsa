//Assignments:
// Write C++ program for simple calculator.
//code -->
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Result = " << num1 / num2 << endl;
            }
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
//2. Find sum and average of array elements.
// code -->
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Check for valid array size
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];
    long long sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
//3. Check number is prime or not.
// code -->
#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a Prime Number." << endl;
    } else {
        cout << num << " is Not a Prime Number." << endl;
    }

    return 0;
}
//4. Reverse a given number.
// code -->
#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    int original = number;

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (original < 0) {
        reverse = -reverse;
    }

    cout << "Reversed number = " << reverse << endl;

    return 0;
}


