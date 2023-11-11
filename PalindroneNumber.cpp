#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int final = n;
    int rev = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (rev == final)
    {
        cout << "Palindrone Number";
    }
    else
    {
        cout << "Not Palindrone Number";
    }
    return 0;
}
