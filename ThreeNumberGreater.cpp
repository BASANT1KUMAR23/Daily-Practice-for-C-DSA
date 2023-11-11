#include<bits/stdc++.h>
using namespace std;
int main(){
          int a,b,c,n;
          cin>>n;
          if(a>b){
            if(a>c){
                cout<<a;
            }else{
                cout<<c;
            }
          }else{
            if(b>c){
                cout<<b;
            }else{
                cout<<c;
            }
          }
return 0;
}
