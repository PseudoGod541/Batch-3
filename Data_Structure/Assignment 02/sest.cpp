#include <iostream>
using namespace std;

int main() {

  for (int i = 0 ; i <= 5 ; i = i + 2) {
    cout << "C++"<< endl;
    if(i == 4)
       break;
  }
  return 0;
}