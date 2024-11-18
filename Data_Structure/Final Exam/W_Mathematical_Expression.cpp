#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char s='=',q;

    cin>>a>>q>>b>>s>>c;

    if(q=='+'){
        if(a+b==c){
            cout<<"Yes"<<endl;
        }
        else if(a+b!=c){
            cout<<a+b<<endl;

        }
    }
    if(q=='-'){
        if(a-b==c){
            cout<<"Yes"<<endl;
        }
        else if(a-b!=c){
            cout<<a-b<<endl;

        }
    }
    if(q=='*'){
        if(a*b==c){
            cout<<"Yes"<<endl;
        }
        else if(a*b!=c){
            cout<<a*b<<endl;

        }
    }
    

}