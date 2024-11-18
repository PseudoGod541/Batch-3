#include <iostream>
#include <string>
#include <map>
#include <sstream>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); // Ignore newline character
    
    while (t--) {
        std::string s;
        std::getline(std::cin, s);
        std::istringstream iss(s);
        std::map<std::string, int> word_count;
        std::string word;
        
        while (iss >> word) {
            // Remove any non-alphanumeric characters from the word
            for (char &c : word) {
                if (!std::isalnum(c)) {
                    c = ' ';
                }
            }

            // Convert the word to lowercase
            for (char &c : word) {
                c = std::tolower(c);
            }

            if (!word.empty()) {
                ++word_count[word];
            }
        }
        
        int max_count = 0;
        std::string max_word;
        
        for (const auto& pair : word_count) {
            if (pair.second > max_count || (pair.second == max_count && pair.first < max_word)) {
                max_count = pair.second;
                max_word = pair.first;
            }
        }
        
        std::cout << max_word << " " << max_count << "\n";
    }
    
    return 0;
}
