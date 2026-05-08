#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    // Virtual Function
    virtual void category()
    {
        cout << "This person belongs to a general category." << endl;
    }

    
    void showPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};
class Student : public Person
{
private:
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m)
        : Person(n, a)
    {
        rollNo = r;
        marks = m;
    }

    void showStudent()
    {
        showPerson();
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
    }

    
    void category() override
    {
        cout << "Category : Student" << endl;
    }
};

class Teacher : public Person
{
private:
    string subject;
    double salary;

public:
    Teacher(string n, int a, string sub, double sal)
        : Person(n, a)
    {
        subject = sub;
        salary = sal;
    }

    void showTeacher()
    {
        showPerson();
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }

    void category() override
    {
        cout << "Category : Teacher" << endl;
    }
};

int main()
{
    Student s1("Ayush", 20, 101, 89.5);

    cout << "----- Student Details -----" << endl;
    s1.showStudent();
    s1.category();

    cout << endl;
    Teacher t1("Rahul Sir", 40, "C++", 50000);

    cout << "----- Teacher Details -----" << endl;
    t1.showTeacher();
    t1.category();

    return 0;
}