#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char input [1000];

    int len, flag = 0;

    while(cin.getline(input, sizeof(input))){
        len = strlen(input);

        for(int i=0;i<len;i++){

            if(input[i] == '"'){
                if(flag == 0){
                    cout<<"``";
                    flag++;
                }
                else{
                    cout<<"''";
                    flag=0;
                }

            }
            else cout<<input[i];


        }
        //cout<<input<<endl;
        cout<<endl;
    }

    return 0;
}
