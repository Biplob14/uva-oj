#include<iostream>
using namespace std;

int main()
{
    string s;
    int i=1;

    while(cin>>s){
        if(s == "*") break;
        if(s == "Hajj") cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;

        i++;
    }

    return 0;
}
