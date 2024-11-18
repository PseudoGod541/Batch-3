#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i=0;i<T;i++)
    {
        string S,X;
        cin>>S>>X;
        int rep=S.find(X);
        while (rep!=-1) 
        {
            S.replace(rep,X.length(),"$");
            rep=S.find(X,rep+1);
        }
        cout<<S<<endl;
    }
    return 0;
}