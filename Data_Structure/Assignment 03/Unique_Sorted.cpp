#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        auto it=unique(a.begin(),a.end());
        a.erase(it,a.end());
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
