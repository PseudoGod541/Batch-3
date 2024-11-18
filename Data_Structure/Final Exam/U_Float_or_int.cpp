#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[s.length()/2]=='.' && s[+1]==0 ){
            cout<<"int"<<" "<<s<<endl;
            break;
        }
        else {
            cout<<"float"<<" "<<s<<endl;
            break;
        }
    }
}