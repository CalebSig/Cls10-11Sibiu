#include <iostream>

using namespace std;

int Q[10001],st=1,dr; ///prin stanga se iese, prin dreapta se intra in coada

/*
     dr-st+1= nr de elemente ramase in coada
     st>dr => coada e vida!
     
*/


void push(int x)
{
    Q[++dr]=x;
}

int pop()
{
    if(st<=dr)
    {
        st++;
        return Q[st-1];
    }
    return -1;
}

int front()
{
    return Q[st];
}

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="front") cout<<front()<<endl;
        else if(s=="pop") pop();
        else
        {
            int x; cin>>x;
            push(x);
        }
    }
    return 0;
}
