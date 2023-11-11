#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            ans = (ans - 1) * i;
        }
        else
        {
            ans = (ans + 1) * i;
        }
    }
    cout << ans << " ";
    return 0;
}