#include <bits/stdc++.h>
using namespace std;
int linear(int array[], int n, int x)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
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
    int y;
    cin >> y;
    linear(array, n, y);

    return 0;
}
