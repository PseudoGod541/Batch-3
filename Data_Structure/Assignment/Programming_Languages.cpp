#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int a,b,a1,b1,a2,b2;cin>>a>>b>>a1>>b1>>a2>>b2;
	    int c=a1+b1;
	    int d=a2+b2;
	    int e=a+b;
	    if(e==c)
	    {
	        cout<<"1\n";
	    }
	    else if(e==d)
	    {
	        cout<<"2\n";
	    }
	    else if (e!=c || e!=d)
	    {
	        cout<<"0\n";
	    }
	}
	return 0;
}
