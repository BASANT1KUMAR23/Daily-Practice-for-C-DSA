#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char chh = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << chh << " ";
        }
        cout << endl;
    }
    return 0;
}
