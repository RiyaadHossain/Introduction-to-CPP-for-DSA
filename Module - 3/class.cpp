#include <bits/stdc++.h>
using namespace std;

class Student
{
    // Access Modifier
public:
    int roll;
    int cls;
    float gpa;

    // Constructor
    Student(int roll, int cls, float gpa)
    {
        this->roll = roll; // this->roll also equal to (*this).roll
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student makeStudent()
{
    Student rahim(29, 9, 4.50);
    return rahim;
}

Student *makeDynamicStudent()
{
    // use 'new' keyword to create dynamic object
    Student *karim = new Student(32, 10, 4.99);
    return karim;
}

int main()
{
    Student rahim = makeStudent();
    Student *karim = makeDynamicStudent(); // Dynamic Function

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << (*karim).cls << " " << karim->roll << " " << karim->gpa;

    return 0;
}