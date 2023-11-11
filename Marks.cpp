#include <bits/stdc++.h>
using namespace std;
int marks(int array[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == k)
        {
            cout << array[i] << " ";
        }
    }
    return 0;
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
    int k;
    cin >> k;
    cout << marks(array, n, k);
    return 0;
}
