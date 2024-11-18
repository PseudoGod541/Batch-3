#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;

    int arr[3]={a,b,c};
    int arr1[3];

    for(int i=0;i<3;i++){
        arr1[i]=arr[i];
    }

    sort(arr1,arr1+3);

    cout<<arr1[0]<<endl<<arr1[1]<<endl<<arr1[2]<<endl<<""<<endl;

    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
} 