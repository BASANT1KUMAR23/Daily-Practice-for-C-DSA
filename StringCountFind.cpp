#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    str.push_back("Apple");
    str.push_back("Mango");
    str.push_back("Mango");
    str.push_back("Apple");
    str.push_back("Apple");
    str.push_back("Apple");
    int count=0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == "Mango")
        {
            count++;
        }
    }
    cout << count;
    return 0;
}