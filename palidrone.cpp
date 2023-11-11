#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev=0;
    while ( n!=0)
    {
        int last = n%10;
        rev = rev*10+last;
        n = n/10;
    }if(rev==temp){
        cout<<"Palindrone Number";
    }else{
        cout<<"Not Palindrone Number";
    }
    
return 0;
}
