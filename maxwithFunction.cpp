#include <bits/stdc++.h>
using namespace std;
void max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}
void min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        cout << a;
    }
    else if (b < a && b < c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    min(x, y, z);
    max(x, y, z);
    // cout << min(x, y, z);
    // cout << max(x, y, z);
    return 0;
}