#include<bits/stdc++.h>
using namespace std;
struct Student
{
    public:
        
        char name[100];
        int roll;
        double gpa;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin >>a.roll >> a.gpa;

    cin.ignore();

    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cout << fixed << setprecision(2);
    cout << a.name << " " << a.roll << " " << a.gpa << '\n';
    cout << b.name << " " << b.roll << " " << b.gpa << '\n';
    return 0;
}