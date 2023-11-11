#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
