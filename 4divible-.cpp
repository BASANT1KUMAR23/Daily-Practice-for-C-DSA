#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int x = 2;
    for (int i = 1; i <= n; i++)
    {
        if (x % 4 == 0)
        {
            sum -= x;
            x += 2;
        }
        else
        {
            sum += x;
            x += 2;
        }
    }
    cout << sum;
    return 0;
}
