#include<bits/stdc++.h>
using namespace std;
string isValidString(string s)
{
    stack<char>st;
    for(char c:s)
    {
        if(!st.empty()&&((c=='A'&&st.top()=='B')||(c=='B'&&st.top()=='A')))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty()?"YES":"NO";
}

int main()
{
    int T;
    cin>>T;
    string s;
    for(int i=0;i<T;i++)
    {
        cin>>s;
        cout<<isValidString(s)<<endl;
    }
    return 0;
}