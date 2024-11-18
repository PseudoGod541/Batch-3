#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	
	while(t--){
	    int n,m; cin>>n>>m;
	    int a=n+m;
	    if(a%2==0){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
