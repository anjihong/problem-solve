#include <bits/stdc++.h>

using namespace std;
deque<pair<int,int>> circle;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, num; cin >> n;
    int idx = 1;
    while (n--) {
        cin >> num;
        circle.push_back({num,idx});
        idx ++;
    }    

    while (!circle.empty()) {
        int del = circle.front().first ;
        cout << circle.front().second << " ";
        circle.pop_front();

        if (del > 0) {
            for (int i = 1; i < del; i++) {
                circle.push_back(circle.front());
                circle.pop_front();
            }
        }
        else {
            del *= -1;
            for (int i = 0; i < del; i++) {
                circle.push_front(circle.back());
                circle.pop_back();
            }
        }

    }
}