#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
    Student(string name, int cls, char section, int id, int math_marks, int eng_marks)
    : name(name), cls(cls), section(section), id(id), math_marks(math_marks), eng_marks(eng_marks) 
    {
    total_marks = math_marks + eng_marks;
    }
    Student()
    :Student("", 0, '\0', 0, 0, 0) {}
};
bool cmp(Student a,Student b) 
{
    if(a.total_marks!=b.total_marks) 
    {
        return a.total_marks>b.total_marks;
    } 
    else 
    {
        return a.id<b.id;
    }
}
int main() 
{
    int n;
    cin>>n;
    Student* students=new Student[n];
    for(int i=0;i<n;i++) 
    {
        cin>>students[i].name>>students[i].cls>>students[i].section>>students[i].id>>students[i].math_marks>>students[i].eng_marks;
        students[i].total_marks=students[i].math_marks+students[i].eng_marks;
    }
    sort(students,students+n,cmp);
    for(int i=0;i<n;i++) 
    {
        cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].section<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }
    return 0;
}
