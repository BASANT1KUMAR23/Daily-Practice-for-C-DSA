#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n)
{
    int temp = n;
    int digit = log10(n) + 1;
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum = sum + pow(last, digit);
        n = n / 10;
    }
    if (temp == sum)
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
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
