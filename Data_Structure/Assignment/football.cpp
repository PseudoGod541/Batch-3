// Update your code below to solve the problem


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int sum1=0,sum2=0;
	    int a[10];
	    for(int i = 0; i < 10; i++)
	    {
	        cin >> a[i];
	    }
	    for(int i=0;i<5;i++)
	    {
	        sum1+=a[i];
	    }
	    for(int i=5;i<10;i++)
	    {
	        sum2+=a[i];
	    }
	    if(sum1>sum2)
	    {
	        cout<<"1"<<'\n';
	    }
	    else if(sum1<sum2)
	    {
	        cout<<"2"<<'\n';
	    }
	    else if(sum1==sum2)
	    {
	        cout<<"0"<<'\n';
	    }
	    
    }
}