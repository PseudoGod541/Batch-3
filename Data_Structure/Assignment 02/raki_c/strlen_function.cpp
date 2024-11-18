#include<bits/stdc++.h>
using namespace std;

int my_len(string a){
    int length=0;
    while(a[length]!='\0'){
        length++;
    }
    return length;
}

int main()
{
    string s;cin>>s;
    my_len(s);
    cout<< my_len(s);

    return 0;
}
