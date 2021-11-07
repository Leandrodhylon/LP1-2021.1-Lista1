#include "function.h"
using namespace std;
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    int i=0,max=V[0],min=V[0], indmax=0, indmin=0;
    if(n==0){
        return {-1, -1};
    }
    while(i<n){
        if(V[i]>=max){
            indmax=i;
            max=V[i];
        }
        if(V[i]<min){
            indmin=i;
            min=V[i];
        }
        i++;
    }
    return { indmin , indmax};
}