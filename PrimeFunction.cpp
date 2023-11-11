#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n - 1; i++)
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
    int a;
    cin >> a;
    if (isprime(a))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}
