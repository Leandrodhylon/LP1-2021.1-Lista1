#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main()
{   int x, resposta=0, i=0;

    while(i<5){
        cin>>x;

        if(x<0){
            resposta++;
        }
        i++;
    }
    cout<<resposta;
 
    return 0;
}
