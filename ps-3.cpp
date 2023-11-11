#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 1;
    for (int i = 2; i <= n; i += 2)
    {
        result *= i;
    }
    cout << result << " ";
    return 0;
}
