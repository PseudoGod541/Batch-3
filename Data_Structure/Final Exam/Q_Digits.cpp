#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        
        while(n!=0){
            int r=n%10;
            n=n/10;
            cout << r<<" " ;

        }
        cout << '\n';
    }
}
