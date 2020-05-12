#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int num, i, sum=0;
    while(cin>>num){
        for(i=1;i<=num;i++){
            sum += i*i*i;
            //cout<<pow(i, 3)<<"  "<<sum<<endl;
        }
        cout<<sum<<endl;
        sum=0;

    }

    return 0;
}
