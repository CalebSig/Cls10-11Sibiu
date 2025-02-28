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

    //cin>>c;
    //cout<<(char)(c+10);


    /*

        Functii predefinite:

            toupper(litera a) -> A;  a=a-32;
            tolower(litera A) -> a;  A=A+32;

            strcpy(str dest, str sursa) copiaza sirul sursa in dest
            strncpy(str dest, str sursa,unsigned int n) copiaza din sursa in dest primele n caractere
            strcat(str dest, str sursa) concateneaza la dest sirul sursa (strcat("aaa","bbb") -> "aaabbb")
            strncat(str dest, str sursa, unsigned int n) concateneaza din sursa primele n caractere in dest
            strchr(str s, char c) -> returneaza sirul s de la prima aparitie la lui c sau NULL daca nu exista

            strchr("deafret",'e') -> "eafret";

            strstr(str s, str k) returneaza sirul s de la prima aparitie a sirului k din el sau NULL daca nu exista

            strstr("fasgAAaaskhg","AAa"); -> "AAaaskhg";

            strcmp(char a, char b) -> returneaza <0 daca a<b (cod ASCII), 0 daca a==b (ASCII) sau >0 daca a>b (ASCII)

            strtok() -> extrag cuvintele dintr o propozitie

            EXEMPLU strtok:

            char s[256],sep[]=" ,.?!<>:;";
            cin.getline(s,256);
            s[i] <=> *(s+i)
            char *p=strtok(s,sep);
            while(p!=NULL)
            {
                ///prelucrez sirul p i.e. cuvantul curent
                p=strtok(NULL,sep);
            }



    */
    char s[256],sep[]=" ,.?!<>:;";
            cin.getline(s,256);
            char *p=strtok(s,sep);
            while(p!=NULL)
            {
                ///prelucrez sirul p i.e. cuvantul curent
                cout<<p<<endl;
                p=strtok(NULL,sep);
            }
    return 0;
}
