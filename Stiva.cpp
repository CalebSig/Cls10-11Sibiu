#include <iostream>

using namespace std;

int top,S[1001];

void push(int x)
{
    S[++top]=x;
}

int pop()
{
    if(top>0)
    {
        top--;
        return top+1;
    }
    else return -1e9;
}

int Top()
{
    if(top>0)
    {
        cout<<S[top]<<endl;
        return S[top];
    }
    else
        return -1e9;
}

int main()
{
    cin.tie(); cout.tie();
    ios::sync_with_stdio(0);
    int n;
    char op[5];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>op;
        if(op[0]=='t') Top();
        else if(op[1]=='o') pop();
        else
        {
            cin>>val;
            push(val);
        }
    }
    return 0;
}
