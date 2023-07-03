#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t; cin >> t;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    while (t--) {
        int n; cin >> n;
        if (n) q.push({abs(n), n>0 ? 1:-1});
        else {
            if (q.empty()) cout << 0 << '\n';
            else {
                cout << q.top().first * q.top().second << '\n';
                q.pop();
            }
        }
    }
}