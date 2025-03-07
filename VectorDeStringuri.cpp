///PB #101

#include <iostream>
#include <cstring>
using namespace std;

char s[251];

char A[251][251];
int k=0;

int main()
{
    cin.getline(s,251);

    for(char *p=strtok(s," ");p!=NULL;p=strtok(NULL," "))
    {
        strcpy(A[++k],p);
    }

    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(strcmp(A[i],A[j])>0)
            {
                char aux[251];
                strcpy(aux,A[i]);
                strcpy(A[i],A[j]);
                strcpy(A[j],aux);
            }

    for(int i=1;i<=k;i++)
        cout<<A[i]<<endl;

    return 0;
}
