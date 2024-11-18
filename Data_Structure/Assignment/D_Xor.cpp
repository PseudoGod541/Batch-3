#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q;cin>>a>>b>>q;
    if(q==1)
    {
        cout<<a<<'\n';
    }
    else if(q==2)
    {
        cout<<b<<'\n';
    }
    else if(q==3)
    {
        cout<<(a^b)<<'\n';
    }
    return 0;
}
