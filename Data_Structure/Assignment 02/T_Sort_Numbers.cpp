#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int b[3];
    int i;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        b[i]=a[i];
        
        

    }
    sort(a,a+3);
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<'\n';
    }
    cout<<'\n';
    
    for(int j=0;j<3;j++)
    {
        cout<<b[j]<<'\n';
    }

}
    