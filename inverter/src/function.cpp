#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::string aux;
    size_t i=0, tam = arr.size();
    while(i<tam){
        tam--;
        aux=arr[tam];
        arr[tam]=arr[i];
        arr[i]=aux;
        i++;
    }
}
