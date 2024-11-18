#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    void input()
    {
        cin>>name>>cls>>section>>id;
    }
    void print()
    {
        cout<<name<<" "<<cls<<" "<<section<<" "<<id<<endl;
    }
};
int main()
{
    int n, temp;
    cin>>n;
    student* students=new student[n];
    for(int i=0;i<n;i++)
    {
        students[i].input();
    }
    for(int i=0;i<n/2;i++)
    {
        temp=students[i].id;
        students[i].id=students[n-i-1].id;
        students[n-i-1].id=temp;
    }
    for(int i=0;i<n;i++)
    {
        students[i].print();
    }
    return 0;
}
