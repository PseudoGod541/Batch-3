#include<bits/stdc++.h>
using namespace std;

int print(int a)
{
    int i=1;
    for(int i=1;i<=a;i++)
    {
        cout<<"I love Recursion"<<'\n';
    }
    if(i>a)
    {
        print(a);
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}
