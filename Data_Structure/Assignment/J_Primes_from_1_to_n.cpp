#include <iostream>

int main() {
    using namespace std;

    int n;
    
    cin >> n;
    

    for (int i = 2; i <= n; ++i) {
        int j;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                break;
            }
        }

        if (j > i / 2) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
