#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>a;
    string s2="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            a.push_back(s2);
            s2="";
        }
        else if(s.substr(i,3)=="end")
        {
            break;
        }
        else
        {
            s2+=s[i];
        }
    }
    int t;
    cin>>t;
    int cur=-1;
    while(t--)
    {
        string srch;
        cin>>srch;
        if(srch=="visit")
        {
            cin>>srch;
            int flag=0;
            for(int i=0;i<a.size();i++)
            {
                if(a[i]==srch)
                {
                    cout<<srch<<endl;
                    cur=i;
                    flag=-1;
                }
            }
            if(flag==0)
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(srch=="prev")
        {
            if(cur>0)
            {
                cur--;
                cout<<a[cur]<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
                cur=0;
            }
        }
        else if(srch=="next")
        {
            if(cur<a.size()-1)
            {
                cur++;
                cout<<a[cur]<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
                cur=a.size()-1;
            }
        }
    }
    return 0;
}
