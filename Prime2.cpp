#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}