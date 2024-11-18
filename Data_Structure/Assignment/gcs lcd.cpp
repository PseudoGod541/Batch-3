#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y;cin>>x>>y;
        int gcd,lcd;
        for(int i=1;i<=x && i<=y;i++)
        {
            if((x%i==0) && (y%i==0) )
            {
                gcd=i;
            }
        }
        lcd=(x*y)/gcd;
        cout<<gcd<<" "<<lcd<<'\n';

    }
    return 0;
}
