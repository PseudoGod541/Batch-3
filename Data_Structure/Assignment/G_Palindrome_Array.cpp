#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int i=0,j=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    
    for(int j=n-1;j>=0;j--){
        b[j]=a[i];
        j++;
        
    }
    
    for(int i=0;i<=n;i++){
        if(a[i]==b[n-1]){
            cout<<"YES"<<"\n";
            return 0;
        }
        else{
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    return 0;
    
}