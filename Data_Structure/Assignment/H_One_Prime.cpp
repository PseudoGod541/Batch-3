// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int count=0;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//     {
//         cout<<"YES"<<'\n';
//     }
//     else
//     {
//         cout<<"NO"<<'\n';
//         }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int i=2;
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<"YES\n";
    }else 
    {
        cout<<"NO\n";
    }

    return 0;
}
