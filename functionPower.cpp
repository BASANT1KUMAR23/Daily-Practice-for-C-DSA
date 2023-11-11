#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    int ans = 1;
    for(int i=1; i<=y; i++){
        ans = ans *x;
    }
    return ans;

}

int main(){
    int a,b;
    cin>>a>>b;
    // int answer = power(a,b);
    // cout<<answer<<" "<<endl;
    power(a,b);
    cout<<power(a,b)<<endl;

    int e,f;
    cin>>e>>f;
    int res = power(e,f);
    cout<<res<<" "<<endl;

return 0;
}
