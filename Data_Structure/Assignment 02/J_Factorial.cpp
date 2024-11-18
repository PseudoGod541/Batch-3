#include<bits/stdc++.h>
using namespace std;

int factOrial(int a)
{
    long long fact=1;
    int j=1;
    for(int j=1;j<=a;j++)
    {
        fact=fact*j;
    }
    cout<<fact<<'\n';
    
   if(j>a)
   {
    factOrial(a);
   }
   else 
   {
    return 0;
   }
   
    

}

int main()
{
    int n;cin>>n;
    
    factOrial(n);
    
    return 0;
}
