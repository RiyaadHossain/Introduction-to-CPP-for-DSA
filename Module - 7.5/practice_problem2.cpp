#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].roll >> students[i].marks;

    reverse(students, students + n);

    for (int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;

    return 0;
}