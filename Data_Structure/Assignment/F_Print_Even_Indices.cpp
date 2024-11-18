#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int b[n];
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    reverse(b,b+n);
    for(j=0;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
    return 0;
}
