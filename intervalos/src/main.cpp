/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int i=0;
    int x=0, valor;
    double pri=0, seg=0, ter=0, qua=0, qui=0;
    while( cin >> valor) {
        if(valor>=0&&valor<25){
            pri++;
        }
        if(valor>=25&&valor<50){
            seg++;
        }
        if(valor>=50&&valor<75){
            ter++;
        }
        if(valor>=75&&valor<100){
            qua++;
        }
        if(valor<0||valor>=100){
            qui++;
        }
        x++;
    }
    cout<<std::setprecision(4)<<100*pri/x<<endl;
    cout<<std::setprecision(4)<<100*seg/x<<endl;
    cout<<std::setprecision(4)<<100*ter/x<<endl;
    cout<<std::setprecision(4)<<100*qua/x<<endl;
    cout<<std::setprecision(4)<<100*qui/x<<endl;
    return 0;
}
