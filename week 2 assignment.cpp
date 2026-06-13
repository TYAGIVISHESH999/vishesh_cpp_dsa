//Assignments:
//1. Create function to find factorial.
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}

//2. Reverse array elements using function.
#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed array:" << endl;
    displayArray(arr, n);

    return 0;
}
//3. Count vowels in a string.
#include <iostream>
#include <string>
using namespace std;

// Function to count vowels
int countVowels(string str) {
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = countVowels(str);

    cout << "Number of vowels = " << vowels << endl;

    return 0;
}
//4. Sort array using Bubble Sort.
#include <iostream>
using namespace std;

// Recursive Bubble Sort Function
void bubbleSort(int arr[], int n) {
    // Base case
    if (n == 1)
        return;

    // One pass of Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call for remaining array
    bubbleSort(arr, n - 1);
}

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array:" << endl;
    displayArray(arr, n);

    return 0;
}

//Mini Project : Student Report Generator with Functions and Arrays.
#include <iostream>
#include <string>
using namespace std;

// Function to calculate total marks
int calculateTotal(int marks[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += marks[i];
    }

    return total;
}

// Function to calculate average
double calculateAverage(int total, int n) {
    return (double)total / n;
}

// Function to determine grade
char calculateGrade(double average) {
    if (average >= 90)
        return 'A';
    else if (average >= 75)
        return 'B';
    else if (average >= 60)
        return 'C';
    else if (average >= 40)
        return 'D';
    else
        return 'F';
}

// Function to display report
void displayReport(string name, int rollNo, int marks[], int n) {
    int total = calculateTotal(marks, n);
    double average = calculateAverage(total, n);
    char grade = calculateGrade(average);

    cout << "\n========== STUDENT REPORT ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    cout << "Marks : ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    cout << "Total Marks : " << total << endl;
    cout << "Average     : " << average << endl;
    cout << "Grade       : " << grade << endl;
}

int main() {
    string name;
    int rollNo;
    const int subjects = 5;
    int marks[subjects];

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks for 5 subjects:" << endl;

    for (int i = 0; i < subjects; i++) {
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Marks should be between 0 and 100." << endl;
            return 0;
        }
    }

    displayReport(name, rollNo, marks, subjects);

    return 0;
}
