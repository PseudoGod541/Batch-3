#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    queue<string>ticketLine;
    string command,name;
    for(int i=0;i<Q;i++)
    {
        cin>>command;
        if(command=="0")
        {
            cin>>name;
            ticketLine.push(name);
        }
        else if(command=="1")
        {
            if(!ticketLine.empty())
            {
                cout<<ticketLine.front()<<endl;
                ticketLine.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}
