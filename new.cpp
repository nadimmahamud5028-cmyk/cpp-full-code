#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
};
int main()
{
    Student nerob;
    nerob.roll = 1;
    nerob.cls = 2;
    nerob.gpa = 5.00;

    Student Nadim;
    Nadim.roll = 2;
    Nadim.cls = 2;
    Nadim.gpa = 5.01;

    cout << fixed << setprecision(2);
    cout <<nerob.cls <<" " <<nerob.roll <<" "<<nerob.gpa<<'\n';
    cout <<Nadim.cls <<" " <<Nadim.roll <<" "<<Nadim.gpa<<'\n';
    return 0;
}