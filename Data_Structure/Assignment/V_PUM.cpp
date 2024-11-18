#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int i=1;
    for(i=1;i<=n;i++)
    {
        for(i=1;i<=4*n;i++)
        {
            cout<<i<<" "<<i+1<<" "<<i+2<<" "<<"PUM"<<"\n";
            i=i+3;
        }
    }
    return 0;
}
