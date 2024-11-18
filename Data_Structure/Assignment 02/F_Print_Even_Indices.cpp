#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) 
        {
            count++;
        }
    }
    long long b[n];
    int i=0;
        for(i=0;i<n;i=i+2) 
        {
            b[i]=a[i];
        }
        
    if(n%2==0) {
        reverse(b,b+(n/2)+1);

    }
    else if(n%2!=0) {
        reverse(b,b+n);
    }
    

    for(int i=0;i<n;i=i+2) {
        cout<<b[i]<<" ";
    }
    
    return 0;
}
