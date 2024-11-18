#include<bits/stdc++.h>
using namespace std;

void change_it(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[n-1]=100;
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    change_it(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}
