#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            fact *= i;
        }
    }
    cout<<endl;
    cout <<fact <<" ";
    return 0;
}
