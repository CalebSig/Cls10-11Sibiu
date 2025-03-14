#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

stack <int>S;

int n;
char op[5];


int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>op;
        if(op[0]=='t') ///varful stivei
            cout<<S.top()<<endl;
        else if(op[1]=='o') ///eliminare
            S.pop();
        else ///adaugare pe stiva
            {
                int x; cin>>x;
                S.push(x);
            }
    }
    return 0;
}
