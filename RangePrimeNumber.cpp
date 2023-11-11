#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n-2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprint(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
