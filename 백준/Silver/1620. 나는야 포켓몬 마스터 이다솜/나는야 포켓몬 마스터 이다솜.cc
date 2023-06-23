#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m; cin >> n >> m;
    map <string, int> m1;
    map <int, string> m2;
    for (int i = 1; i <= n; i++) {
        string s; cin >> s;
        m1[s] = i;
        m2[i] = s;
    }
    while (m--) {
        string ans; cin >> ans;
        if (ans[0] >= '0' && ans[0] <= '9') {
            int cur = stoi(ans);
            cout << (*m2.find(cur)).second << '\n';
        }
        else {
            cout << (*m1.find(ans)).second << '\n';
        }
    }
}