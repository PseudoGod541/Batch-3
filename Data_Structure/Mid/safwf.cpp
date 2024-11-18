#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::vector<std::string> a;

    std::string s2 = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            a.push_back(s2);
            s2 = "";
        } else if (s.substr(i, 3) == "end") {
            break;
        } else {
            s2 += s[i];
        }
    }

    int t;
    std::cin >> t;

    int cur = -1;
    while (t--) {
        std::string srch;
        std::cin >> srch;

        if (srch == "visit") {
            std::cin >> srch;
            int flag = 0;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == srch) {
                    std::cout << srch << std::endl;
                    cur = i;
                    flag = 1;
                }
            }
            if (flag == 0) {
                std::cout << "Not Available" << std::endl;
            }
        } else if (srch == "prev") {
            if (cur > 0) {
                cur--;
                std::cout << a[cur] << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
                cur = 0;
            }
        } else if (srch == "next") {
            if (cur < a.size() - 1) {
                cur++;
                std::cout << a[cur] << std::endl;
            } else {
                std::cout << "Not Available" << std::endl;
                cur = a.size() - 1;
            }
        }
    }

    return 0;
}