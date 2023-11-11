#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 5)
        {
            if (i == 1)
            {
                cout << "ONE"
                     << " ";
            }
            else if (i == 2)
            {
                cout << "TWO"
                     << " ";
            }
            else if (i == 3)
            {
                cout << "THREE"
                     << " ";
            }
            else if (i > 3)
            {
                if (i % 2 == 0)
                {
                    cout << "Even"
                         << " ";
                }
                else
                {
                    cout << "Odd"
                         << " ";
                }
            }
        }
    }
    return 0;
}
