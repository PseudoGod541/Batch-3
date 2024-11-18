#include<bits/stdc++.h>
using namespace std;

int o_n(int a)
{
    int i;
    for(int i=a;i>1;i--)
    {
        cout<<i<<' ';
    }
    cout<<"1";
    if(i<a)
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