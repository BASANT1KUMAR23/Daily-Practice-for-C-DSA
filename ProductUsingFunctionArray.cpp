#include <bits/stdc++.h>
using namespace std;
int product(int array[], int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= array[i];
    }
    return ans;
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
    cout << product(array, n);
    return 0;
}
