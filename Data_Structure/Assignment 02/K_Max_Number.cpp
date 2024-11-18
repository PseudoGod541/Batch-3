#include<bits/stdc++.h>
using namespace std;


int maxNum(int b[],int a)
{
    int j=0;
    for(int j=0;j<a;j++)
    {
        cin>>b[j];
    }
    sort(b,b+a);
    cout<<b[a-1]<<'\n';
    if(j>a)
    {
        maxNum(b, a);
    }
    else{
        return 0;
    }
}

int main()
{
    int n;cin>>n;
    int a[n];
    maxNum(a,n);
    
    return 0;
}
