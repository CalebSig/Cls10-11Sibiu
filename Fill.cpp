#include <fstream>

using namespace std;

ifstream cin("fill.in");
ofstream cout("fill.out");

int A[101][101],n,m,cnt;

void fill(int i, int j) //in antet avem poz curenta
{
    A[i][j]=0; //lucram cu poz curenta din matrice
    if(i>1 && A[i-1][j]==1) fill(i-1,j); //N
    if(j<m && A[i][j+1]==1) fill(i,j+1); //E
    if(i<n && A[i+1][j]==1) fill(i+1,j); //S
    if(j>1 && A[i][j-1]==1) fill(i,j-1); //V
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>A[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(A[i][j]==1)
            {
                cnt++;
                fill(i,j);
            }
    cout<<cnt;
    return 0;
}
