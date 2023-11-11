#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, first, last;
    cin >> n;
    first = n;
    last = n % 10;
    for (first = n; first >= 10; first = first / 10)
    {
        cout << first;
    }
    return 0;
}
