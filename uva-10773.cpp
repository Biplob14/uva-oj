#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int u, v, d;
    float r, dt, tc, t1, t2;

    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>d>>v>>u;
        if(v>=u) cout<<"Case "<<i<<": "<<"can't determine"<<endl;
        else{
            float t1 = (float)d/(float)u;
            t2 = d/(sqrt((u*u)-(v*v)));
            dt = t2-t1;
            //cout<<t1<<" "<<t2<<" "<<dt<<endl;
            if(dt<=0) cout<<"Case "<<i<<": "<<"can't determine"<<endl;
            else
                cout<<fixed<<setprecision(3)<<"Case "<<i<<": "<<dt<<endl;
        }

    }

    return 0;
}
