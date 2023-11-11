#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout <<"Sum Of Natural Number : "<<n<<" = "<<sum;

    return 0;
}
