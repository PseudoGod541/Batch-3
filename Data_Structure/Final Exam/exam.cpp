#include<bits/stdc++.h>
using namespace std;
class Bike
{
    public:
        char name[100];
        int max_speed;
        int millage;
        int accelararion;
        Bike(char* nm,int mx,int mil,int acc)
        {
            strcpy(name,nm);
            max_speed=mx;
            millage+mil;
            accelararion=acc;
        }
};
Bike motorcycle()
{
    char name[100]="Honda";
    Bike hon(name,200,1600,20);
    return hon;
}
int main()
{
    Bike honda=motorcycle();
    cout<<honda.name<<endl;
    cout<<honda.max_speed<<endl;
    cout<<honda.millage<<endl;
    cout<<honda.accelararion<<endl;
    return 0;
}