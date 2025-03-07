#include <iostream>
#include <cstring>
using namespace std;
int p,k;
int main()
{
    char s[256]; ///char *s=(char*)malloc(256*sizeof(char))
   // s[0]='2'; ///(*s)=2
   // s[2]='6'; ///*(s+2)=6
    //strcpy(s,s+2); ///am sters primele 2 caractere;
    // strcpy(s,s+k); //sterg primele k caractere din s, k<strlen(s)
    // stergere a k caractere dupa o poz p in sirul s
    //strcpy(s+p,s+p+k);
    //cout<<s;
    //inserare a sirului str in s la poz k
    char str[256];
    strcpy(s,"masina");
    strcpy(str,"asi");
    k=3;
    char aux[256];
    strcpy(aux,str);
    strcat(aux,s+k);
    strcpy(s+k,aux);
    cout<<s;
    return 0;
}
