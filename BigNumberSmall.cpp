#include <bits/stdc++.h>
using namespace std;
int sortinteger(int array[], int n)
{
   int start = 0;
   for (int i = 0; i < n; i++)
   {
      if (array[i] > 0)
      {
         swap(array[i], array[start++]);
      }
   }
}
int main()
{
   int n;
   cin >> n;
   int array[n];
   for (int i = 0; i < n; i++)
   {
      cin >> array[i];
   }
   sortinteger(array, n);
   for (int i = 0; i < n; i++)
   {
      cout << array[i] << " ";
   }
   return 0;
}
