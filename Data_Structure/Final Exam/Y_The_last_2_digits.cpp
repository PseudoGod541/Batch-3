// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long a,b,c,d; cin>>a>>b>>c>>d;
//     int result=a*b*c*d;

//     int lastTwo=result%100;

//     if(result>=0 && result<=100){
//         cout<<"00"<<endl;
//     }
//     else if(result>100 && result<=109){
//         cout<<"0"<<lastTwo<<endl;
//     }
//     else if(result>109 && result<=199){
//         cout<<lastTwo<<endl;
//     }
//     else if(result>109 && result<=199){
//         cout<<lastTwo<<endl;
//     }


// }

#include <iostream>

using namespace std;

int main() {
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    
    int product = a * b * c * d;
    int last_two_digits = product % 100;

    if(last_two_digits<10){
        cout<<"0"<<last_two_digits<<endl;
    }
    else {
        cout << last_two_digits << endl;
    }
    return 0;
}
