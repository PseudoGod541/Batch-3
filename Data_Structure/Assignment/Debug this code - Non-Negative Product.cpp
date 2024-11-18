// this code has some logical error - debug this code to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
        int mul=1;
	    int count_neg = 0;
        int count_zero = 0;
        for(int i = 0; i < N; i++)
        {
            mul=mul*A[i];
            if(A[i] == 0)
            {
                count_zero++;
            }
            else if(A[i] < 0)
            {
                count_neg++;
            } 
        }
        if(mul>0 && count_neg%2 != 0)
        {
            cout << "1" << endl;
        }
        else if(mul>0 && count_neg%2 == 0)
        {
            cout<<"0"<<'\n';
        }
        else if(mul>0 && count_zero%2 != 0)
        {
            cout << "1" << endl;
        }
        else if(mul>0 && count_neg%2 == 0)
        {
            cout<<"0"<<'\n';
        }

        
       
	}
    
}