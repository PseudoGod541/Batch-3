#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];

    for(int i=0;i<4;i++){
        cin>>a[i];
        
        if(a[i]>a[i+1]   ){
            cout<<a[i+1]<<" "<<a[i]<<endl;
            break;
            
        }
        else if(a[i]<a[i+1]   ){
            cout<<"-1"<<endl;
            break;
            
        }
        
        
    }
}