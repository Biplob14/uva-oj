#include<iostream>
using namespace std;

int main()
{
    int n, t, i, res, flag=0, a=0;
    int b;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        res = (((((n*567)/9)+7492)*235)/47)-498;
        while(res!=0){
            b=res%10;
            res=res/10;
            //a=(a*10)+b;
            flag++;
            if(flag==2){
                if(b<0) b=b*(-1);
                cout<<b<<endl;
                flag=0;
                break;
            }
        }
        //cout<<a;
        a=0;
    }

    return 0;
}
