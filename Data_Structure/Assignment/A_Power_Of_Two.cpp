#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin>>n;
    
    while(n) {
        
        if(n % 2 == 1 and n != 1) {
            cout <<  "NO\n";
            return 0;
        }
        n /= 2;
    }
    cout <<  "YES\n";
    
    return 0;
}
