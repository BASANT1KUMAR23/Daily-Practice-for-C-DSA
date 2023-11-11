#include <bits/stdc++.h>
using namespace std;
int check(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] / 4 == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << array[i] / 4 << endl;
        }
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
    check(array, n);
    return 0;
}
