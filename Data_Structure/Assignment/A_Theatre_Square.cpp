#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;cin>>n>>m>>a;
    if(m*n>a ){
        cout<<(m*n)/a<<'\n';
    }
    else if(m*n<a)
    {
        cout<<n<<'\n';
    }
    else if(m*n>a && m==n && m>a && n>a)
    {
        cout<<a<<'\n';

    }
    else if(m==n && n==a)
    {
        cout<<a<<'\n';
    }
    
    return 0;
}
