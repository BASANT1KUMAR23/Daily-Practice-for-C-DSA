#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int array[], int n, int key)
{
    int l = 0;
    int h = 0;
    int mid;
    while (n > 0)
    {
        mid = (l + h) / 2;
    }
    if (array[mid] == key)
    {
        return mid + 1;
    }
    else if (key < array[mid])
    {
        h = mid - 1;
    }
    else
    {
        l = mid + 1;
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
    int key;
    cin >> key;
    cout << BinarySearch(array, n, key);
    return 0;
}