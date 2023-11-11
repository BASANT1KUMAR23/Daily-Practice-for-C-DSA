 #include<bits/stdc++.h>
 using namespace std;
 int firstsmallest(int array[],int n){
    int minni = INT_MAX;
    for(int i=0; i<n; i++){
        minni = min(minni,array[i]);
    }
    return minni;
 }
 int secondsmallest(int array[],int n){
    int first = firstsmallest(array,n);
    int minni = INT_MAX;
    for(int i=0; i<n; i++){
        if(array[i]!=first){
            minni = min(minni,array[i]);
        }
    }
    return minni;
 }
 int thirdsmallest(int array[],int n){
    int first = firstsmallest(array,n);
    int second = secondsmallest(array,n);
    int minni = INT_MAX;
    for(int i=0; i<n; i++){
        if(array[i]!=first && array[i]!=second){
            minni = min(minni,array[i]);
        }
    }
    return minni;
 }
 int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
      cin>>array[i];
    }
    cout<<firstsmallest(array,n)<<endl;
    cout<<secondsmallest(array,n)<<endl;
    cout<<thirdsmallest(array,n)<<endl;
 
 return 0;
 }
 