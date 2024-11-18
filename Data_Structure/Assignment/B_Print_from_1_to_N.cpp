#include<bits/stdc++.h>
using namespace std;

int o_n(int a)
{
    int i;
    for(int i=1;i<=a;i++)
    {
        cout<<i<<'\n';
    }
    if(i>a)
    {
        o_n(a);

    }
    else
    {
        return 0;
    }
}

int main()
{
    int n; cin>>n;
    o_n(n);

    return 0;
}
