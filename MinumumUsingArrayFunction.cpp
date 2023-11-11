#include <bits/stdc++.h>
using namespace std;
int minimum(int array[], int n)
{
    int minni = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minni = min(minni, array[i]);
    }
    return minni;
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
    cout << minimum(array, n);
    return 0;
}
