#include<bits/stdc++.h>
using namespace std;
struct Student
{
    public:
        int roll;
        char c[10];
        float f;
};
int main()
{
    Student a;
    a.roll = 1;
    a.f = 4.00;
    char tmp[10] = "Nerob";
    strcpy(a.c , tmp);
    cout << a.roll << " " << a.f << " " << a.c <<'\n';
    return 0;
}