#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
bool flag = 1;
for(int i=2; i<=n-2; i++){
    if(n%i==0){
        flag = false;
        break;;
    }
}if(flag==true){
    cout<<"Prime Number";
}else{
    cout<<"Not Prime Number"
}
return 0;
}
