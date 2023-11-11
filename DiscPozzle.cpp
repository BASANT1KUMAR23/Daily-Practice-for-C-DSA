#include <bits/stdc++.h>
using namespace std;
void TOH(int n, int b, int a, int e)
{
    if (n == 1)
    {
        cout << "Move from " << b << e;
    }
    else
    {
        TOH(n - 1, b, e, a);
        cout << " Move From " << b << e<<endl;
        TOH(n - 1, a, b, e);
    }
}
int main()
{
    int n;
    cin >> n;
    int b=1, a=2, e=3;
    TOH(n, a, b, e);
    return 0;
}
