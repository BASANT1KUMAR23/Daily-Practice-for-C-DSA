#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int fact = 1;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"All Factors From 1 To "<<n<<" = "<<fact;

    return 0;
}
