#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch; cin>>ch;

    if(ch>='a'&& ch<'z'){
        ch=ch+1;
        cout<<ch<<"\n";
    }
    else if(ch=='z'){
        cout<<"a"<<"\n";
    }
    return 0;
}
