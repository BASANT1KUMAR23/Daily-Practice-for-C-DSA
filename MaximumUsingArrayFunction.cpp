#include <bits/stdc++.h>
using namespace std;
int maximum(int array[], int n)
{
    int maxxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxxi = max(maxxi, array[i]);
    }
    return maxxi;
}
int minimum(int array[], int n)
{
    int minni = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minni = min(minni, array[i]);
    }
    return minni;
}
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
    int x = maximum(array, n);
    int y = minimum(array, n);
    cout << x - y;

    return 0;
}
