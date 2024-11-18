#include<iostream>
#include<algorithm>
using namespace std;

int min_max(int a[],int n)
{
    sort(a,a+n);
    cout<<a[0]<<" "<<a[n-1]<<"\n";
    return 0;
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    min_max(a,n);
}