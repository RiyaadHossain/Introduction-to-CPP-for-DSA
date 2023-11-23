#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
        return a.roll < b.roll;

    return a.marks > b.marks;
}

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].roll >> students[i].marks;

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;

    return 0;
}