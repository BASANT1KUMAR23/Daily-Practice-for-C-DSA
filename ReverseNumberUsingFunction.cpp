#include <bits/stdc++.h>
using namespace std;
int reverse(int array[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
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
    reverse(array, n);
    return 0;
}
