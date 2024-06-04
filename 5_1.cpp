#include <iostream>
using namespace std;

int main()
{
    
    // Print all the odd numbers from 1 to 100.

    for(int i=1; i<100;i++)
    {
            if(i%2==0){
                cout<<i-1<<endl;
            }
    }


    int i = 1 ;
    for(;i<=100;){
        cout<<i<<endl;
        i=i+2;
    }

    return 0;
}
















