#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;

    int sum=0;

    for(int i=0;i<s.length();i++){
        int a=(int)s;
        int r=a%10;
        int a=a/10;

        sum+=r;
    }
    cout<<sum<<endl;
    return 0;
}
