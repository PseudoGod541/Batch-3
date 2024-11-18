#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;cin>>x>>n;
    int sum=1;
    for(int i=2;i<=n;i=i+2)
    {
        sum*=x;
        
    }
    cout<<sum<<'\n';
    return 0;
}
