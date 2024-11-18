#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        bool sorted=true;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                sorted=false;
                break;
            }
        }
        if(sorted)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
