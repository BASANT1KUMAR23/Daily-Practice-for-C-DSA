#include <bits/stdc++.h>
using namespace std;
int CheckSorted(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i + 1] < array[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << CheckSorted(array, n);
    return 0;
}
