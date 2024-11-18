#include<bits/stdc++.h>
using namespace std;
string checkLists(stack<int>s,queue<int>q)
{
    while(!s.empty()&&!q.empty())
    {
        if(s.top()!=q.front())
        {
            return "NO";
        }
        s.pop();
        q.pop();
    }
    if(s.empty()&&q.empty())
    {
        return "YES";
    }
    return "NO";
}
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>stackList;
    queue<int>queueList;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        stackList.push(temp);
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        queueList.push(temp);
    }
    cout<<checkLists(stackList,queueList)<<endl;
    return 0;
}
