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
        map<int,int>mp;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        pair<int,int>p;
        p.first=0,p.second=0;
        for(auto it:mp)
        {
            if(it.second==p.second && it.first>p.first)
            {
                p.first=it.first;
            }
            else if(it.second>p.second)
            {
                p.first=it.first;
                p.second=it.second;
            }
        }
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
