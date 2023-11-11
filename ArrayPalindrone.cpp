#include <bits/stdc++.h>
using namespace std;
bool check(int array[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (array[s++] != array[e--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    if (check(array, n) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
