#include <bits/stdc++.h>
using namespace std;
int FindNumber(int array[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == k)
        {
            count++;
        }
    }
    return count;
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
    cout << FindNumber(array, n, k);
    return 0;
}
