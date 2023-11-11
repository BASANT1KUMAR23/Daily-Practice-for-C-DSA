#include <bits/stdc++.h>
using namespace std;
bool palindrone(int n)
{
    int temp = n;
    int rev = 0;
    while (n != 0)
    {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    if (rev == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (palindrone(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}