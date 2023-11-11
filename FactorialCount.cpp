// 1!+2!+3!+4!+5!......................N terms

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int terms;
    cin >> terms;
    int value = 2;
    int fact = 1;
    int sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        if (value % 2 == 0)
        {
            for (int j = 1; j <= value; j++)
            {
                fact *= j;
            }
            value += 2;
        }
        sum += fact;
        fact = 1;
    }
    cout << sum;
    return 0;
}
