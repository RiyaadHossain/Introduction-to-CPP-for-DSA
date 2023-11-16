#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main()
{

    Student rahim = Student("Rahim", 23, 'a', 75, 9);
    Student karim = Student("Karim", 03, 'b', 93, 9);
    Student jamim = Student("Jamim", 73, 'a', 84, 9);

    if (rahim.math_marks > karim.math_marks && rahim.math_marks > jamim.math_marks)
    {
        cout << "Rahim got highest marks in Math" << endl;
    }
    else if (karim.math_marks > jamim.math_marks)
    {
        cout << "Karim got highest marks in Math" << endl;
    }
    else
        cout << "Jamim got highest marks in Math" << endl;

    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "IND";

    Cricketer *kohli = new Cricketer;
    kohli->jersey_no = 34;
    kohli->country = "IND";

    dhoni->jersey_no = kohli->jersey_no;
    dhoni->country = kohli->country;
    delete kohli;

    cout << dhoni->jersey_no;

    return 0;
}