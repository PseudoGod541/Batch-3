#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    if(n>20000){
        cout<<"Gucci Bag"<<"\n"<<"Gucci Belt"<<"\n";
    }
    else if(n>=10000){
        cout<<"Gucci Bag"<<"\n";
    }
    else if(n>=5000){
        cout<<"Levis Bag"<<"\n";
    }
    else{
        cout<<"Something"<<"\n";
    }
    return 0;
}
