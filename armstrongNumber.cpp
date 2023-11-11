#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int Digit = log10(n) + 1;
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum = sum + pow(last, Digit);
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }
    return 0;
}
