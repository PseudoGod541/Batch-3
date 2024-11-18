#include<bits/stdc++.h>
using namespace std;

void swap(int x, int y){
    int temp=0;

    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<"\n";

}

int main()
{
    int x,y; cin>>x>>y;
    swap(x,y);

    return 0;
}
