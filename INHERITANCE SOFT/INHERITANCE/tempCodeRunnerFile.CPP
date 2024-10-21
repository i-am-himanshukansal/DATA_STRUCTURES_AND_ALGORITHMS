#include <iostream>
using namespace std;

class Student {
public:
    string childName;
    int rollNo;

    Student(string name, int rNo) : childName(name), rollNo(rNo) {}
};

class Academic : public Student {
public:
    float cgpa;

    Academic(string name, int rNo, float cGPA) : Student(name, rNo), cgpa(cGPA) {}
};

class Sports : public Student {
public:
    string sport;

    Sports(string name, int rNo, string sportType) : Student(name, rNo), sport(sportType) {}
};

class Profile : public Academic, public Sports {
public:
    Profile(string name, int rNo, float cGPA, string sportType)
        : Academic(name, rNo, cGPA), Sports(name, rNo, sportType) {}

    void display() {
        cout << "Child's Name: " << childName << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Sport: " << sport << endl;
    }
};

int main() {
    Profile p("Himanshu Kansal", 22132, 7.5, "Badminton");
    p.display();
    return 0;
}
