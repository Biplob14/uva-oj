#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int t, r, c;
    cin>>t;
    while(t--){
        cin>>r>>c;
        cout<<(r/3)*(c/3)<<endl;
    }

    return 0;
}
