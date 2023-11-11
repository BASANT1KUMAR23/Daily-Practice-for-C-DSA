#include <bits/stdc++.h>
using namespace std;
int main()
{
    //pow(a,b)

    int a,b;
    cin>>a>>b;

    int ans = 1;

    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    cout<<ans<<endl;

    int c,d;
    cin>>c>>d;

    int res = 1;

    for(int i=1; i<=d; i++){
        res = res * c;
    }
    cout<<res<<endl;
    return 0;
}
