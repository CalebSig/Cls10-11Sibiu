#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

stack <int>S;

int n;
string op;

int ncif(int n)
{
    if(n<10) return 1;
    return 1+ncif(n/10);
}

struct NUME{ ///cum se numeste tipul de date
    int n;
    short int nCif;
    bool par;
    char cuv[30];   ///campuri
}var, V[101],M[101][101]; ///zona declarativa

struct numeTip{
    char nume[50];
    int zi,luna,an;
    bool gen;
}b;

struct{

    int val;
    int nc;

}x;

struct
{
    struct{
        int zi,luna,an;
    }data;
    char nume[50];
}var;

numeTip a;

int main()
{
   /* cin.getline(a.nume,50);
    cin>>a.zi>>a.luna>>a.an>>a.gen;
    cout<<a.nume<<endl<<a.zi<<'.'<<a.luna<<'.'<<a.an<<"\n"<<a.gen;*/
    /*cin>>x.val;
    int c=x.val;
    if(c==0) x.nc=1;
    while(c)
    {
        x.nc++;
        c=c/10;
    }
    cout<<x.nc;*/

    cin>>var.nume>>var.data.zi>>var.data.luna>>var.data.an;
    cout<<var.nume<<endl<<var.data.zi<<" "<<var.data.luna<<" "<<var.data.an;

    return 0;
}
