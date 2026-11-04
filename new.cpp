#include<bits/stdc++.h>
using namespace std;
struct Student
{
    public:
        
        char name[10];
        int roll;
        double gpa;
};
int main()
{
    Student a;
    cin >> a.name >> a.roll >> a.gpa;
    Student b;
    cin >> b.name >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << '\n';
    cout << b.name << " " << b.roll << " " << b.gpa << '\n';
    return 0;
}