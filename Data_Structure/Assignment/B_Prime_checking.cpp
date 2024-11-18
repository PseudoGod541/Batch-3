#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(n==2)
    {
        cout<<"YES\n";
    }
    else if(count==2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
