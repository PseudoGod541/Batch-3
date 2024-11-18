#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum1=0;
        int x=0;
        for(int j=1;j<=(n/2);j++)
        {
            sum1=sum1+a[n-1-x]-a[0+x];
            x++;


        }
        cout<<sum1<<'\n';
        
    }
    return 0;
}
