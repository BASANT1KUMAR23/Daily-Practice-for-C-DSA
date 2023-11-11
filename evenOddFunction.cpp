#include<bits/stdc++.h>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"Number is not Even"<<endl;
    }

return 0;
}
