#include<bits/stdc++.h>
using namespace std;
class Student 
{
public:
    string name;
    int cls;
    char section;
    int mathMarks;
    int engMarks;
    void scan() 
    {
        cin>>name>>cls>>section>>mathMarks>>engMarks;
    }
    void print() 
    {
        cout<<name<<" "<<cls<<" "<<section<<" "<< mathMarks<<" "<<engMarks<<endl;
    }
};
int main()
{
    int N;
    cin>>N;
    Student *students=new Student[N];
    for(int i=0;i<N;i++)
    {
        students[i].scan();
    }
    for(int i=0;i<N;i++)
    {
        students[i].print();
    }
    return 0;
}