#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    unsigned long long int arr[50];
    int i, j, n, par=0;
    while(cin>>n){
        if(n == 0) break;
        for(i=0;n!=0;i++){
            arr[i] = n%2;
            if(arr[i] == 1) par++;
            n /= 2;
        }
        cout<<"The parity of ";
        for(j=i-1;j>=0;j--){
            cout<<arr[j];
        }
        cout<<" is "<<par<<" (mod 2)."<<endl;
        par=0;
    }


    return 0;
}
