#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

void sort_students(Student *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j].marks > arr[targetIdx].marks)
                targetIdx = j;
            else if (arr[j].marks == arr[targetIdx].marks)
            {
                if (arr[j].roll < arr[targetIdx].roll)
                    targetIdx = j;
            }
        }

        Student temp = arr[i];
        arr[i] = arr[targetIdx];
        arr[targetIdx] = temp;
    }
}

int main()
{
    int t, i = 0;
    cin >> t;

    Student arr[3];
    Student *dynamicArr = new Student[3]; // Dynamic array of objects

    while (i != t)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        i++;
    }

    int n = sizeof(arr) / sizeof(Student);
    sort_students(arr, n);

    i = 0;
    while (i != t)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
        i++;
    }

    return 0;
}