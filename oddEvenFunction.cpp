#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}
int main()
{
    int a;
    cin >> a;
    check(a);
    return 0;
}
