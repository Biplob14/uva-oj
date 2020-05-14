#include<iostream>
using namespace std;

int main()
{
    int a, b, n, sum=0, k;

    while(cin>>n>>k){
        sum = n;
        while(n>1){
            sum += n/k;
            a=n%k;
            n /= k;
            if(n+a >=k) n+=a;

        }
        cout<<sum<<endl;
    }
    return 0;
}
