#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
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
            cout<<"YES"<<'\n';
        }
        else if(count==2)
        {
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
}


int main()
{
    int t;cin>>t;
    
    while(t--)
    {
        int n;cin>>n;
        isPrime(n);
    }
    return 0;
}
