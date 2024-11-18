// Update the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string S,A,B;
   cin>>S;
// Write the code below this line to generate String A

A=S;
B=S;
int n=S.length();



// Write the code below this line to generate String A

  

   for(int i=0; i<n-1;i++)
       {
         cout<<A[i];
       }
       cout<<A[n-1];
   
    
   cout<<endl;
   for(int i=n-1; i>0;i--)
       {
         cout<<B[i];
       }
       cout<<B[0];
    
   cout<<endl;
  }
 return 0;
}