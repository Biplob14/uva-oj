#include<iostream>
using namespace std;

int main()
{
    unsigned int n1, n2, carry=0, i, c1, c2, flag=0, c, cnt=0;

    while(cin>>n1>>n2){

        if(n1==0 && n2==0) break;
        while(n1 != 0 || n2 != 0){
            c1 = n1%10;
            n1 = n1/10;
            c2 = n2%10;
            n2 = n2/10;
            c = c1+c2;
            //if(c>9) carry = c1+c2+((c1+c2)/10)

            carry = (c1+c2+carry)/10;
            cnt = cnt + carry;

        }

        if(cnt == 0) cout<<"No carry operation."<<endl;
        else if(cnt == 1) cout<<"1 carry operation."<<endl;
        else cout<<cnt<<" carry operations."<<endl;

        cnt=0;
        carry=0;
    }

    return 0;
}
