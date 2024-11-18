#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;cin>>a>>b>>c;
    double s=(a+b+c)/2;
    double x=s*(s-a)*(s-b)*(s-c);
    double area=sqrt(x);
    if(a+b>c && b+c>a && c+a>b)
    {

        cout<<"Valid"<<'\n'<<fixed<<setprecision(6)<<area<<'\n';
    }
    else
    {
        cout<<"Invalid"<<'\n';

    }
    return 0;
}
