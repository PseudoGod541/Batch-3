#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    long long a,b,c;cin>>a>>b>>c;
	    if(+a+b+c==0 || +a+b-c==0 || +a-b+c==0 || -a+b+c==0 || +a-b-c==0 || -a-b+c==0 || 
	    -a+b-c==0 || -a-b-c==0)
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