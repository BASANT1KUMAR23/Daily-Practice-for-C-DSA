#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i += 2)
    {
        ans *= i;
    }
    cout << ans << " ";
    return 0;
}
