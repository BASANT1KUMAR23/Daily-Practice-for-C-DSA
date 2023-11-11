#include <bits/stdc++.h>
using namespace std;
int main()
{
     int array[22],size,i,j;
     cout<<"Enter Array Size : "<<endl;
     cin>>size;
     cout<<"Enter Array Element : "<<endl;
     for(int i=0; i<size; i++){
        cin>>array[i];
     }
     for(int i=0; i<(size-1); i++){
        int min = array[i];
        int Ioc = i;
        for(int j=i+1; j<size; j++){
            if(array[j]<min)
            
                min = array[j];
                Ioc = j;

            }
        int temp = array[i];
        array[j] = array[Ioc];
        array[Ioc] = temp;
        }
     cout<<"Array After Selection Sort : ";
     for(int j=0; j<size; j++){
        cout<<array[i];
     }

    return 0;
}
