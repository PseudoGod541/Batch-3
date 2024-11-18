#include <bits/stdc++.h>
using namespace std;
 
bool compare(const pair<int, pair<int, string>>& a, const pair<int, pair<int, string>>& b) {
    if (a.first == b.first) {
        return a.second.first > b.second.first;
    }
    return a.first < b.first;
}
 
int main() {
    int n, roll, marks;
    cin >> n;
    string s;
 
    priority_queue<pair<int, pair<int, string>>, vector<pair<int, pair<int, string>>>, decltype(&compare)> pq(compare);
 
    for (int i = 0; i < n; i++) {
        cin >> s >> roll >> marks;
        pq.push({marks, {roll, s}});
    }
    int q;
    cin >> q;
    while (q--) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            cin >> s >> roll >> marks;
            pq.push({marks, {roll, s}});
            cout << pq.top().second.second << " " << pq.top().second.first << " " << pq.top().first << endl;
        } else if (cmd == 1) {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().second.second << " " << pq.top().second.first << " " << pq.top().first << endl;
        } else {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top().second.second << " " << pq.top().second.first << " " << pq.top().first << endl;
                }
            }
        }
    }
    return 0;
}
