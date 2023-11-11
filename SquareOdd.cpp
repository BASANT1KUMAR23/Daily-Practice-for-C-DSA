//x+x³+x⁵+x⁷+............................x⁽ⁿ⁺²⁾ (N terms)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int power = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, power);
        power += 2;
    }
    cout << sum;
    return 0;
}
