// sum of Natural Number

#include <bits/stdc++.h>
using namespace std;
int add(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + add(n-1);
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << add(n);

    return 0;
}
