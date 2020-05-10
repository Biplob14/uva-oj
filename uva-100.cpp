#include<iostream>
using namespace std;

int main()
{
     long long n, i, i1, j, f=0, maxi=0;

    while(cin>>i>>j){
        cout<<i<<" "<<j<<" ";
        if(i>j) swap(i, j);
        for(n=i;n<=j;n++){
            int seq = n;
            while(true){
                f++;
                if(seq==1) break;
                if(seq%2 == 1) seq = (3*seq)+1;
                else
                    seq = seq/2;
            }
            //cout<<"j "<<n<<endl;
            if(f>maxi) maxi = f;
            f=0;

        }
            cout<<maxi<<endl;
            maxi = 0;

    }

    return 0;
}
