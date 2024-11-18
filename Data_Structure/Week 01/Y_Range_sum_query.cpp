#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    int a[n];
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pre[n];
    a[0]=pre[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
    }
    return 0;
}
