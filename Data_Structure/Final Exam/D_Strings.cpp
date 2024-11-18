#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;
    string b; cin>>b;

    string c=a+b;
    
    swap(a[0],b[0]);


    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}
