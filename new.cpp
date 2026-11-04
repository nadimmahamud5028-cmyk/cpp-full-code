#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    x = 100;

    int y;
    int *q = new int;
    *q = 100;
    cout << x << " "  << *q << '\n';
    return 0;
}
