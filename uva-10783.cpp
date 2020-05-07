#include<iostream>
using namespace std;

int main()
{
    int from, to, i, t, sum=0;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>from>>to;
        if((from & 1) == 0) from++;
        for(int j=from;j<=to;j+=2){
            sum += from;
            from +=2;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum = 0;
    }


    return 0;
}
