#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string s = to_string(N);

    for (int i=0;i<s.length();i++) {
        cout << s[i] << " ";
    }

    cout << endl;
    return 0;
}

