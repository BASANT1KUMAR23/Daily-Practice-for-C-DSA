#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of A"<<endl;
    cin>>a;
    cout<<"Enter the value of B"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation what are you perform"<<endl;
    cin>>op;

    switch(op){
        case '+': 
        cout<<(a+b)<<endl;
        break;

        case '-': 
        cout<<(a-b)<<endl;
        break;

        case '*': 
        cout<<(a*b)<<endl;
        break;

        case '/': 
        cout<<(a/b)<<endl;
        break;

        case '%': 
        cout<<(a%b)<<endl;
        break;
    
    default: 
    cout<<"Plase enter the valid operation"<<endl;
    }
    return 0;
}
