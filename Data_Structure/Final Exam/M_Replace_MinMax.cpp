#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int maxI=0;
    int minI=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            maxI=i;
        }
    }
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            minI=i;
        }
    }
    swap(a[minI],a[maxI]);
    
    for(int i=0,j=0;i<n,j<n;i++,j++){
        cout<<a[i]<<" ";
    }
    return 0;
}
