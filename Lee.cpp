#include <fstream>
#include <queue>
using namespace std;

ifstream cin("roboti.in");
ofstream cout("roboti.out");

int A[1001][1001],n,m;
struct coord{int i,j;}start,stop;

const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};

bool inside(coord poz)
{
    return poz.i>0 && poz.j>0 && poz.i<=n && poz.j<=m;
}

void Lee(coord start)
{
    queue <coord>Q;
    Q.push(start);
    A[start.i][start.j]=1;
    while(!Q.empty())
    {
        coord curent=Q.front();
        Q.pop();
        for(int d=0;d<4;d++)
        {
            coord nou;
            nou.i=curent.i+di[d];
            nou.j=curent.j+dj[d]; ///vecini in matrice, nevalidati
            if(inside(nou) && A[nou.i][nou.j]==0)
            {
                Q.push(nou);
                A[nou.i][nou.j]=A[curent.i][curent.j]+1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>A[i][j];

    /*for(int i=1;i<=n;i++,cout<<endl)
        for(int j=1;j<=m;j++) cout<<A[i][j]<<" ";*/

    cin>>start.i>>start.j>>stop.i>>stop.j;

    Lee(start);

    //cout<<endl;

    /*for(int i=1;i<=n;i++,cout<<endl)
        for(int j=1;j<=m;j++) cout<<A[i][j]<<" ";*/

    cout<<A[stop.i][stop.j]-1;

    return 0;
}
