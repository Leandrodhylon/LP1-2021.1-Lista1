#include "function.h"
#include <vector>
#include <iostream>
using namespace std;

std::vector<unsigned int> fib_below_n( unsigned int n){
    vector<unsigned int> x;
    int z=0, y=1, R=1;
    if(n<2){
    return x;
    }
    x.push_back(R); 
    while(R<n){
        x.push_back(R); 
        z=y;
        y=R;
        R=z+y;         
    } 
    return x;
}