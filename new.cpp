#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int cls;
        int roll;
        double gpa;
        Student(int c,int r,double g)
        {
            cls = c;
            roll =r;
            gpa = g;
        }
};
int main()
{
    Student Nadim(4,5,5.00);
    Student Nerob(4,6,4.99); 

    cout << Nadim.cls <<" " << Nadim.roll <<" " <<Nadim.gpa <<'\n';
    cout <<  Nerob.cls <<" " <<  Nerob.roll <<" " << Nerob.gpa <<'\n';
    return 0;
}