#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char sec;
    int marks;

    // Student(int id, string name, char sec, int marks)
    // {
    //     this->id = id;
    //     this->name = name;
    //     this->sec = sec;
    //     this->marks = marks;
    // }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student student1 = Student();
        cin >> student1.id >> student1.name >> student1.sec >> student1.marks;

        Student student2 = Student();
        cin >> student2.id >> student2.name >> student2.sec >> student2.marks;

        Student student3 = Student();
        cin >> student3.id >> student3.name >> student3.sec >> student3.marks;

        if (student1.marks >= student2.marks && student1.marks >= student3.marks)
            cout << student1.id << " " << student1.name << " " << student1.sec << " " << student1.marks << endl;
        else if (student2.marks >= student3.marks)
            cout << student2.id << " " << student2.name << " " << student2.sec << " " << student2.marks << endl;
        else
            cout << student3.id << " " << student3.name << " " << student3.sec << " " << student3.marks << endl;
    }

    return 0;
}