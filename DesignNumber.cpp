#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 15)
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
            else if (i == 4)
            {
                cout << "FOUR"
                     << " ";
            }
            else if (i == 5)
            {
                cout << "FIVE"
                     << " ";
            }
            else if (i == 6)
            {
                cout << "SIX"
                     << " ";
            }
            else if (i == 7)
            {
                cout << "SEVEN"
                     << " ";
            }
            else if (i == 8)
            {
                cout << "EIGHT"
                     << " ";
            }
            else if (i == 9)
            {
                cout << "NINE"
                     << " ";
            }
            else if (i == 10)
            {
                cout << "TEN"
                     << " ";
            }
            else if (i == 11)
            {
                cout << "ELEVEN"
                     << " ";
            }
            else if (i == 12)
            {
                cout << "TWELVE"
                     << " ";
            }
            else if (i == 13)
            {
                cout << "THIRTEEN"
                     << " ";
            }
            else if (i > 13)
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
