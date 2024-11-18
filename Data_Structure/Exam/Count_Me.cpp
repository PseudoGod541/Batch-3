#include <iostream>
#include <string>
#include <map>
#include <sstream>
 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--) {
        string sentence;
        getline(cin, sentence);
 
        map<string, int> wordCount;
        istringstream iss(sentence);
 
        string word;
        string mostFrequentWord;
        int maxCount = 0;
 
        while (iss >> word) {
            ++wordCount[word];
            if (wordCount[word] > maxCount) {
                maxCount = wordCount[word];
                mostFrequentWord = word;
            }
        }
 
        cout << mostFrequentWord << " " << maxCount << endl;
    }
    return 0;
}

    
