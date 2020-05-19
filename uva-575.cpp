#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    string num;

    while(cin>>num, num[0] != '0'){
        int length = num.length(), total = 0;
        int j=length;
        for(int i =0; i<= length-1; i++){
            int dec_num = (int)num[i]-48;
            //cout<<dec_num<<" ";
            total += dec_num*(pow(2, j--)-1);
            //j--;
        }
        cout<<total<<endl;
        //cout<<((int)num[0]-48);
    }

    return 0;
}
