                                                 //fruit+v
	                                             //v+fish
	                                             //n=dish
	                                             //a=fruit
	                                             //b=vegetables
	                                             //c=fish



#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;                                
	while(t--)
	{
	    int n,a,b,c;cin>>n>>a>>b>>c;
	    int x=b/2;
        int count=0;
	    if(x>=a && x>=c)
        {
            count=a+c;
        }
        if(count>=n)
        {
            cout<<"YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
	    
	}
	return 0;
}