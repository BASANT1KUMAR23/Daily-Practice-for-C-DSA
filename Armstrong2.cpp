#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int final = n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int last = n % 10;
        sum = sum + (last * last * last);
        n = n / 10;
    }
    if (sum == final)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }
    return 0;
}
