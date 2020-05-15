//this is not an efficient way of solving this problem
//but i did, my code my rule :D
#include<iostream>
using namespace std;

int main()
{
    int t_case, number_of_jumps, cs=1;
    cin>>t_case;
    while(t_case--){
        int high_jumps = 0, low_jumps = 0;
        cin>>number_of_jumps;
        int mario_jumps[number_of_jumps];
        if(number_of_jumps <= 1){
            high_jumps = 0;
            low_jumps =0;
            for(int i = 0; i < number_of_jumps; i++)
                cin>>mario_jumps[i];
        }
        else{
            for(int i = 0; i < number_of_jumps; i++){
            cin>>mario_jumps[i];
            }
            for(int i = 1; i<number_of_jumps; i++){
                if(mario_jumps[i]>mario_jumps[i-1]) high_jumps++;
                else if(mario_jumps[i] < mario_jumps[i-1]) low_jumps++;
            }
        }
        cout<<"Case "<<cs++<<": "<<high_jumps<<" "<<low_jumps<<endl;

    }

    return 0;
}
