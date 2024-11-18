#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case"<<" "<<i<<":"<<" ";
        int n;cin>>n;
        for(int j=1;j<=n;j++)
        {
            
            if(n%j==0)
            {
                cout<<j<<" ";
            }
            
        }
        cout<<'\n';
    }
    return 0;
}
