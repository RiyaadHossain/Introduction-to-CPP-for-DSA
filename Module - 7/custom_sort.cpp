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
    int t, i = 0;
    cin >> t;

    Student arr[4];

    while (i != t)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        i++;
    }

    // Sorting using built-in function
    int n = sizeof(arr) / sizeof(Student);
    sort(arr, arr + n, cmp);

    i = 0;
    while (i != t)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
        i++;
    }

    return 0;
}