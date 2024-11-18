#include<bits/stdc++.h>
using namespace std;

int  n_time(int a,char c)
{
    
        for(int i=1;i<=a;i++)
        {
            cout<<c<<" ";;
        }
        cout<<'\n';

}




int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        char ch;cin>>ch;
        n_time(n,ch);
        
    }
    return 0;
}
