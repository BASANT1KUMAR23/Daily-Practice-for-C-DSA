#include <bits/stdc++.h>
using namespace std;
int main()
{
    int base, exp;
    cin >> base >> exp;
    int ans = 1;
    for (int i = 0; i < exp; i++)
    {
        ans = ans * base;
    }
    cout << ans << " ";
    return 0;
}
