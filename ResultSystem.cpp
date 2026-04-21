#include <iostream>
#include <string>
using namespace std;

class Marks
{
public:
    int marks_scored;
};

class Attendance
{
public:
    int attendance_percentage;
};

class StudentRecord : public Marks, public Attendance
{
public:
    string student_name;
};

int main()
{
    StudentRecord student_object;

    getline(cin, student_object.student_name);
    cin >> student_object.marks_scored;
    cin >> student_object.attendance_percentage;

    cout << "Student Name: " << student_object.student_name << endl;
    cout << "Marks: " << student_object.marks_scored << endl;
    cout << "Attendance: " << student_object.attendance_percentage << endl;

    if (student_object.attendance_percentage >= 75)
    {
        cout << "Eligible for Exam: Yes" << endl;
    }
    else
    {
        cout << "Eligible for Exam: No" << endl;
    }

    return 0;
}
