#include<bits/stdc++.h>
using namespace std;

int one_to_n(int a)
{
    
    for(int i=1;i<=a-1;i++)
    {
        cout<<i<<" ";
    }
    cout<<a;
    return 0;
}

int main()
{
    int n ; cin>>n;
    one_to_n(n);
    return 0;
}
