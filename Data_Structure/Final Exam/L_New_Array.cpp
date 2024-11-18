#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=n-1;i>0;i--){
        cout<<b[i]<<a[i];
    }


    return 0;
}
