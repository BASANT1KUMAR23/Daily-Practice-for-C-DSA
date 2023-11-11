#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int s = 0;
    int e = str.length() - 1;
    // int x = swap(str[s++], str[e--]);

    while (s < e)
    {
        swap(str[s++], str[e--]);
        // int temp;
        // temp = str[s];
        // str[s] = str[e];
    }
    for (int i = 0; i < str.length() - 1; i++)
    {
        cout << str[i] << " ";
    }
    return 0;
}