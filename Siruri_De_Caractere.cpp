#include <iostream>
#include <cstring>
using namespace std;

char c,d;
char sir[251];

int main()
{
    /*
        caracter = getchar(); -urmatorul caracter citit(inclusiv spatii)
        cin>>caracter; -urmatorul diferit de spatii si rand liber
    */
   /// cin>>c>>d;
   /// cout<<d;

    /*
        sirurile de caractere:
            sunt indexate de la 0 implicit
            se termina tot timpul cu NULL  \0 \n
            ex: sir[]=abcdef (initial); sir[3]=NULL; cout<<sir; //abc

    */

    /*cin>>sir; ///citire fara spatiu
    cout<<sir;*/

    /*cin.getline(sir,251); ///citire cu spatii pana la primul enter
    cout<<sir;*/

    cin>>c;
    cout<<(char)(c+10);

    return 0;
}
