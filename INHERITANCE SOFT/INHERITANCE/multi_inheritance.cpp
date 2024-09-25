#include <iostream>
using namespace std;

class Student {
public:
    string fname;
    string lname;

    Student(string firstName, string lastName) : fname(firstName), lname(lastName) {}

    virtual void display() {
        cout << "First Name: " << fname << endl;
        cout << "Last Name: " << lname << endl;
    }
};

class SportsPerson : public Student {
public:
    string sport;
    int rank;

    SportsPerson(string firstName, string lastName, string sportType, int sportRank)
        : Student(firstName, lastName), sport(sportType), rank(sportRank) {}

    void display() override {
        Student::display();
        cout << "Sport: " << sport << endl;
        cout << "Rank: " << rank << endl;
    }
};

class Academic : public Student {
public:
    string subject;
    float grade;

    Academic(string firstName, string lastName, string subjectName, float subjectGrade)
        : Student(firstName, lastName), subject(subjectName), grade(subjectGrade) {}

    void display() override {
        Student::display();
        cout << "Subject: " << subject << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    cout << "Press 1 for SportsPerson or 2 for Academic\n";

    while (t--) {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
        case 1: {
            string firstName, lastName, sport;
            int rank;
            cout << "Enter first name, last name, sport, rank: ";
            cin >> firstName >> lastName >> sport >> rank;
            SportsPerson sp(firstName, lastName, sport, rank);
            sp.display();
            break;
        }
        case 2: {
            string firstName, lastName, subject;
            float grade;
            cout << "Enter first name, last name, subject, grade: ";
            cin >> firstName >> lastName >> subject >> grade;
            Academic ac(firstName, lastName, subject, grade);
            ac.display();
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }

    return 0;
}
