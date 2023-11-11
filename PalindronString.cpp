#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int s = 0;
    int e = str.length()- 1;
    while (s < e)
    {
        if (str[s++] != str[e--])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES";
    return 0;
}