#include<iostream> 
using namespace std; 
int main() 
{ 
int n; cin>>n; 
if(n<=0){
cout<<"NO"<<endl;
}
else if(n==1)
{ 
cout<<"NO"<<endl; 
} 
else if(n==2 || n==3 || n==5 || n==7)
{ 
cout<<"YES"<<endl; 
} 
else if(n>7)
{ 
if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
{ 
cout<<"NO"<<endl; 
} 
else if(n%2!=0 || n%3!=0 || n%5!=0 || n%7!=0) 
{
 cout<<"YES"<<endl; 
} 
} 
return 0; 
}