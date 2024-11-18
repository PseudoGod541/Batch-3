#include<bits/stdc++.h>
using namespace std;
int average()
{
    int n;cin>>n;
    double a[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<fixed<<setprecision(7)<<sum/n<<'\n';
    return 0;
}
int main()
{
    average();
    return 0;
}
