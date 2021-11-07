/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int i=0;
    int x, valor, resultado;
    while( cin >> valor) {
        cin>>x;
        i=0;
        resultado=valor;
        if(x<0){
            while(i>x+1){
                valor=valor-1;
                resultado=resultado+valor;
                i--;
            }
        std::cout<<resultado<<endl;
        }
        if(x>0){
            while(i<x-1){
                valor=valor+1;
                resultado=resultado+valor;
                i++;
            }
        std::cout<<resultado<<endl;
        }
        if(x==0){
            std::cout<<resultado<<endl;
        }
    }
    return 0;
}
