#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string personName, int personAge) : name(personName), age(personAge) {}

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    string studentID;

    Student(string personName, int personAge, string id) 
        : Person(personName, personAge), studentID(id) {}

    void display() override {
        Person::display();
        cout << "Student ID: " << studentID << endl;
    }
};

class Employee : public Person {
public:
    string employeeID;
    string department;

    Employee(string personName, int personAge, string id, string dept) 
        : Person(personName, personAge), employeeID(id), department(dept) {}

    void display() override {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

class StudentEmployee : public Student, public Employee {
public:
    StudentEmployee(string personName, int personAge, string studentID, string employeeID, string department)
        : Student(personName, personAge, studentID), Employee(personName, personAge, employeeID, department) {}

    void display() override {
        Student::display();
        cout << "-----" << endl;
        Employee::display();
    }
};

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int choice;
        cout << "Press 1 for Student, 2 for Employee, 3 for StudentEmployee: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name, studentID;
            int age;
            cout << "Enter name, age, student ID: ";
            cin >> name >> age >> studentID;
            Student student(name, age, studentID);
            student.display();
            break;
        }
        case 2: {
            string name, employeeID, department;
            int age;
            cout << "Enter name, age, employee ID, department: ";
            cin >> name >> age >> employeeID >> department;
            Employee employee(name, age, employeeID, department);
            employee.display();
            break;
        }
        case 3: {
            string name, studentID, employeeID, department;
            int age;
            cout << "Enter name, age, student ID, employee ID, department: ";
            cin >> name >> age >> studentID >> employeeID >> department;
            StudentEmployee se(name, age, studentID, employeeID, department);
            se.display();
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
