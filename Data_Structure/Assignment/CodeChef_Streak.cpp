#include <iostream>
using namespace std;

int main() {
	
	int t;cin>>t;
    
    int s1,s2,s3,s4,s5;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    int b[n];
        int c=0,d=0,e=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
        for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
        for(int i=0;i<n;i++)
	    {
	        if(a[i]>0)
            {
                c++;
            }
            else if(a[i]==0)
            {
                break;
            }
        }
        
        for(int i=0;i<n;i++)
	    {
	        
            if(b[i]>=0)
            {
                d++;
            }
            if(b[i]==0)
            {
                break;
            }
                
            
            
            
        }
        
        cout<<c<<" "<<d-e<<" ";
        
        
        if(c>d-e)
        {
            cout<<"Om"<<'\n';
        }
        else if(c<d-e)
        {
            cout<<"Addy"<<'\n';
        }
        else if(c==d-e)
        {
            cout<<"Draw"<<'\n';
        }
    }
    
	return 0;
}

