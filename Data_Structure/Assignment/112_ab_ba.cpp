#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;cin>>a>>b;
    long long c=pow(a,b);
    long long d=pow(b,a);
    cout<<c-d<<'\n';
    return 0;
}
