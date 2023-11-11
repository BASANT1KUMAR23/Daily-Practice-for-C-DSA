#include <bits/stdc++.h>
using namespace std;
int sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sort(array, array + n);
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
    sort(array, n);
    return 0;
}
