#include <bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       int originalN = n;
       int digitCount = log10(n)+1;
       int sum =0;
       while(n!=0){
        int lastDigit = n%10;
        sum = sum +pow(lastDigit,digitCount);
        n = n/10;
       }
       if(sum==originalN){
        cout<<"Armstrong Number"<<endl;
       }else{
        cout<<"Not Armstrong Number"<<endl;
       }
    return 0;
}
