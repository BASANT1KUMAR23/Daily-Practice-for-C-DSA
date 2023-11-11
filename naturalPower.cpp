//x+x²+x³+x⁴+............................xⁿ (N terms).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i);
    }
    cout << sum;

    return 0;
}
