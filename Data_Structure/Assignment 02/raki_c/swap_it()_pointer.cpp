#include<bits/stdc++.h>
using namespace std;

void swap_it(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    
    
}

int main()
{
    int x,y;cin>>x>>y;
    swap_it(x,y);
    cout<<x<<" "<<y;

    return 0;
}
//important &
