#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; cin>>x>>y;
    int i=1;
    int gcd=0;;
    
    for(;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
            
        }
    }
    cout<<gcd<<'\n';
    return 0;
}
