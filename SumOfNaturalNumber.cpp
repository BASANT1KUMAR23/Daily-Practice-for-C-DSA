#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of Natural Number is 1 to " << n << " = " << sum << " ";

    return 0;
}
