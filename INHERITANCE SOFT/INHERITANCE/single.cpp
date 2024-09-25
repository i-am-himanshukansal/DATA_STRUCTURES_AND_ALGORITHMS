#include <iostream>
using namespace std;

class Parent {
public:
    string fname;
    string mname;

    Parent(string fatherName, string motherName) : fname(fatherName), mname(motherName) {}

    virtual void display() {
        cout << "Father's Name: " << fname << endl;
        cout << "Mother's Name: " << mname << endl;
    }
};

class Child : public Parent {
public:
    int age;
    string classroom;
    float height;
    string cname;

    Child(string fatherName, string motherName, string childName, int childAge, string classRoom, float childHeight)
        : Parent(fatherName, motherName), cname(childName), age(childAge), classroom(classRoom), height(childHeight) {}

    void display() override {
        Parent::display();
        cout << "Child's Name: " << cname << endl;
        cout << "Child's Age: " << age << endl;
        cout << "Child's Classroom: " << classroom << endl;
        cout << "Child's Height: " << height << " meters" << endl;
    }
};

int main() {
    // Parent *person = new Child("John Doe", "Jane Doe", "Chris Doe", 10, "5A", 1.4);
    // person->display();
    // delete person;

    int t;
    cout<<"enter no of test cases : ";
    cin>>t;
    cout<<"press 1 for parents or press 2 for child "<<endl;
    while(t--){
        int n;
        cout<<"enter your choice : ";
        cin>>n;
                switch(n){
              case 1 : { 
                string a,b;
                cout<<"enter father_name , mother_name : ";
                cin>>a>>b;
                Parent p1(a,b);
                p1.display();
                break;
              }
              case 2: {
                string a,b,c;
                int d;
                string e;
                float f;
                cout<<"father_name , mother_name ,child_name , age , classroom , height : ";
                cin>>a>>b>>c>>d>>e>>f;
                Child p2(a,b,c,d,e,f);
                p2.display();
                break;
              }
              default : {
                cout<<"Invalid choice"<<endl;
              }
                }
    }

    return 0;
}