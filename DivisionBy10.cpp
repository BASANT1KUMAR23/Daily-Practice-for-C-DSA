#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 10 == 0)
        {
            cout << "Yes";
            break;
        }
        else
        {
            cout << "No";
            break;
        }
    }

    return 0;
}
