#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum = sum + (last * last * last);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}
