#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int i=1;
    
    for(int i=1;i<=n;i++)
    {
        int j=1;
        
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
            
        }
        j--;
        
        cout<<'\n';
      
    }
    return 0;
}
