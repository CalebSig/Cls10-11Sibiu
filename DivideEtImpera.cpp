//pb 1148

#include <iostream>
using namespace std;

bool divetimp(int A[], int st, int dr)
{
    if(st==dr) return A[st]%2; ///cazul trivial
    else
    {
        int mij=(st+dr)/2; //mergem  la mijloc
        
        int p=divetimp(A,st,mij); //rez de pe stanga
        int q=divetimp(A,mij+1,dr); //rez de pe dreapta

        return p || q; //rezultatul final calculat in functie de p si q
    }
}

int main()
{
    int A[101],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    if(divetimp(A,1,n)) cout<<"DA";
    else cout<<"NU";
    return 0;
}
