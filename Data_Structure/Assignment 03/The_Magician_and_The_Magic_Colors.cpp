#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2="";
        for(int i=0;i<n;i++)
        {
            if((s[i]=='R'&&s[i+1]=='G')||(s[i]=='G'&&s[i+1]=='R'))
            {
                s2+='Y';
                i++;
            }
            else if((s[i]=='B'&&s[i+1]=='G')||(s[i]=='G'&&s[i+1]=='B'))
            {
                s2+='C';
                i++;
            }
            else if((s[i]=='R'&&s[i+1]=='B')||(s[i]=='B'&&s[i+1]=='R'))
            {
                s2+='P';
                i++;
            }
            else if(s[i]==s[i+1])
            {
                i++;
            }
            else
            {
                s2+=s[i];
            }
        }
        int n1=s2.length();
        string s3="";
        for(int i=0;i<n1;i++)
        {
            if(s2[i]==s2[i+1])
            {
                i++;
            }
            else
            {
                if(s3[s3.length()-1]==s2[i])
                {
                    s3.pop_back();
                }
                else
                {
                    s3+=s2[i];
                }
            }
        }
        cout<<s3<<endl;
    }
    return 0;
}
