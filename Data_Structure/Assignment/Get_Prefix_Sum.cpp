#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    long long a[n],sum=0;
    long long b[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        b[i]=sum;
    }
    reverse(b,b+n);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<' ';
    }
    return 0;
}
