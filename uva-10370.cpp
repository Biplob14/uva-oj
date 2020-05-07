#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c, n, i, j, flag=0, sum=0;
    float res, avg;
    cin>>c;
    for(i=0;i<c;i++){
        cin>>n;
        int marks[n];
        for(j=0;j<n;j++){
            //int marks[n];
            cin>>marks[j];
            sum += marks[j];
        }
        avg =sum/n;
        for(j=0;j<n;j++){
            if(marks[j]>avg) flag++;
        }
        res = (100.00/n)*flag;
        cout<<fixed<<setprecision(3)<<res<<"%"<<endl;
        flag=0;
        sum=0;
    }

    return 0;
}
