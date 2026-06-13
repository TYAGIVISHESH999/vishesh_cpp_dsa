//Assignments:
//1. Create class ‘Employee’ with salary calculation method.
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double basicSalary;
    double bonus;

public:
    void input() {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    double calculateSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "\nEmployee Name: " << name << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee e;

    e.input();
    e.display();

    return 0;
}
//2. Demonstrate constructor overloading.
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {

    Student s1;

    Student s2(101, "Rahul");

    cout << "Default Constructor" << endl;
    s1.display();

    cout << "\nParameterized Constructor" << endl;
    s2.display();

    return 0;
}
//3. Inherit ‘Shape’ → ‘Rectangle’ and ‘Circle’.
#include <iostream>
using namespace std;

class Shape {
protected:
    double value1;
    double value2;
};

class Rectangle : public Shape {

public:

    void input() {
        cout << "Enter length and breadth: ";
        cin >> value1 >> value2;
    }

    void area() {
        cout << "Area of Rectangle = " << value1 * value2 << endl;
    }
};

class Circle : public Shape {

public:

    void input() {
        cout << "Enter radius: ";
        cin >> value1;
    }

    void area() {
        cout << "Area of Circle = " << 3.14159 * value1 * value1 << endl;
    }
};

int main() {

    Rectangle r;

    r.input();

    r.area();

    cout << endl;

    Circle c;

    c.input();

    c.area();

    return 0;
}
//4. Create abstract class with virtual function.
#include <iostream>
using namespace std;

class Animal {

public:

    virtual void sound() = 0;
};

class Dog : public Animal {

public:

    void sound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {

public:

    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {

    Dog d;
    Cat c;

    Animal *ptr;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}
//Mini Project: Library Management System (OOP Based).
#include <iostream>
using namespace std;

class Library {

private:

    string title;
    string author;
    int id;
    bool issued;

public:

    Library() {
        issued = false;
    }

    void addBook() {

        cout << "Enter Book ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    void issueBook() {

        if (issued) {
            cout << "Book is already issued." << endl;
        }
        else {
            issued = true;
            cout << "Book issued successfully." << endl;
        }
    }

    void returnBook() {

        if (!issued) {
            cout << "Book was not issued." << endl;
        }
        else {
            issued = false;
            cout << "Book returned successfully." << endl;
        }
    }

    void displayBook() {

        cout << "\nBook ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;

        if (issued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main() {

    Library book;

    int choice;

    while (true) {

        cout << "\n====== LIBRARY MENU ======\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Book\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            book.addBook();
            break;

        case 2:
            book.issueBook();
            break;

        case 3:
            book.returnBook();
            break;

        case 4:
            book.displayBook();
            break;

        case 5:
            cout << "Thank You!" << endl;
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
