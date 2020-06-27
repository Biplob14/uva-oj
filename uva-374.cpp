#include<iostream>
#include<stdio.h>
using namespace std;

int big_mod(long long b, long long p, long long m){
    if(p == 0) return 1;
    else if(p%2==1){
        int p1 = b%m;
        int p2 = (big_mod(b, p-1, m))%m;
        return (p1*p2)%m;
    }
    else{
        int p1 = (big_mod(b, p/2, m))%m;
        return (p1*p1)%m;
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    long long b, p, m;
    while(cin>>b>>p>>m){
        cout<<big_mod(b, p, m)<<endl;
    }

    return 0;
}
