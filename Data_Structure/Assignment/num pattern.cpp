#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            cout<<j;
        }
        k--;
        cout<<'\n';

    }
    return 0;
}
