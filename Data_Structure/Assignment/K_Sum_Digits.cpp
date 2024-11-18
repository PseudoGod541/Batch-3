// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int sum=0;
//     int r=0;
    

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i]-'0';
//     }
//     // for(int i=0;i<n;i++){
//     //     //cin>>a[i];
//     //      //sum+=a[i];
//     //      r=a[i]%10;
//     //      a[i]=a[i]/10;
//     //      sum+=a[i];
//     // }

    
//     cout<<sum<<endl;
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    string digits;
    cin >> digits;
    
    int digit_sum = 0;
    for (int i = 0; i < N; i++) {
        digit_sum += digits[i] - '0';
    }
    
    cout << digit_sum << endl;
    
    return 0;
}

