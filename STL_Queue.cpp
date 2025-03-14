#include <iostream>
#include <queue>
using namespace std;

queue <int> Q;

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="front") cout<<Q.front()<<endl;
        else if(s=="pop") Q.pop();
        else
        {
            int x; cin>>x;
            Q.push(x);
        }
    }
    return 0;
}
