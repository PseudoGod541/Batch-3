#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    if(n<100000000)
    {
        cout<<n+9999<<'\n'<<n*9999<<'\n';
    }
    else if(n>10000000)
    {
        cout<<n<<'\n'<<n*9999<<'\n';
    }
        
    
    
    return 0;
}
