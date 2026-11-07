#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,word;
    getline(cin,s);
    cout << s << '\n';
    stringstream ss(s);
    ss >> word;
    cout << word << endl;
    ss>> word;
    cout << word << endl;
    int cnt =0;
    while(ss >> word)
    {
        cnt++;
        cout << word << '\n';
    }
    cout << cnt << '\n';
    return 0;
}