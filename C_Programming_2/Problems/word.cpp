#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int lowercaseCount=0,uppercaseCount=0;

    for(char c:s){
        if(c>='a' && c<='z'){
            lowercaseCount++;
        }
        else if(c>='A'  && c<='Z'){
            uppercaseCount++;
        }
    }
    if(uppercaseCount>lowercaseCount){
        c=toupper(s);
    }
    else if(uppercaseCount<=lowercaseCount){
       c=tolower(s);
    }

    cout<<s<<endl;

}