//Assignments:
//1. Write data into a file and read it back.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "Enter text to write into file: ";
    getline(cin, text);

    ofstream fout("data.txt");

    if (!fout) {
        cout << "Error creating file." << endl;
        return 0;
    }

    fout << text;
    fout.close();

    ifstream fin("data.txt");

    if (!fin) {
        cout << "Error opening file." << endl;
        return 0;
    }

    string line;

    cout << "\nData read from file:\n";

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
//2. Use vector to store N elements and sort them.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input.";
        return 0;
    }

    vector<int> v;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << "\nSorted Elements:\n";

    for (int x : v)
        cout << x << " ";

    return 0;
}
//3. Use map to store student roll & name.
#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    map<int, string> student;

    for (int i = 0; i < n; i++) {

        int roll;
        string name;

        cout << "\nEnter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        student[roll] = name;
    }

    cout << "\nStudent Records\n";

    for (auto x : student) {

        cout << "Roll No: " << x.first
             << " Name: " << x.second << endl;
    }

    return 0;
}
//4. Handle exception for division by zero.
#include <iostream>

using namespace std;

int main() {

    double a, b;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {

        if (b == 0)
            throw "Division by zero is not allowed.";

        cout << "Result = " << a / b << endl;
    }

    catch (const char* msg) {

        cout << "Exception: " << msg << endl;
    }

    return 0;
}
//Mini Project: Employee Record Saver using File Handling + STL.
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Employee {

public:

    int id;
    string name;
    double salary;
};

int main() {

    vector<Employee> emp;

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of employees.";
        return 0;
    }

    for (int i = 0; i < n; i++) {

        Employee e;

        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> e.id;

        cout << "Enter Name: ";
        cin >> e.name;

        cout << "Enter Salary: ";
        cin >> e.salary;

        emp.push_back(e);
    }

    ofstream fout("employees.txt");

    if (!fout) {

        cout << "Error creating file.";

        return 0;
    }

    for (auto e : emp) {

        fout << e.id << " "
             << e.name << " "
             << e.salary << endl;
    }

    fout.close();

    cout << "\nEmployee records saved successfully.\n";

    ifstream fin("employees.txt");

    if (!fin) {

        cout << "Error reading file.";

        return 0;
    }

    Employee e;

    cout << "\nEmployee Records\n";
    cout << "-------------------------\n";

    while (fin >> e.id >> e.name >> e.salary) {

        cout << "ID     : " << e.id << endl;
        cout << "Name   : " << e.name << endl;
        cout << "Salary : " << e.salary << endl;
        cout << "-------------------------\n";
    }

    fin.close();

    return 0;
}
