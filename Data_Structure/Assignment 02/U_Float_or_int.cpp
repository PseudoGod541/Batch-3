#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;cin>>n;
    double temp=n;
    n=n*10;
    int j;
    j=(int)n%10;
    if(j!=0)
    {
        cout<<"float"<<" "<<(int)temp<<'\n';
    }
    else if(j==0)
    {
        cout<<"int"<<'\n';
    }
    return 0;
}
