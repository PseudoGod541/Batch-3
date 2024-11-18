#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int a,b;
    
    while(t--){
        
        int n; cin>>n;
        int temp=n;
        a=n%10;

        b=temp/10000;
        cout<<"Sum"<<" "<<"="<<" "<<a+b<<'\n';

    }
    
    return 0;
}
