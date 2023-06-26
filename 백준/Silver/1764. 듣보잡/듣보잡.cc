#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m; cin >> n >> m;
    map<string,bool> s;
    while (n--) {
        string not_h; cin >> not_h;
        s[not_h] = 0;
    }
    int cnt = 0;
    while (m--) {
        string not_s; cin >> not_s;
        if (s.find(not_s) != s.end()) {s[not_s] = 1; cnt ++;}
    }
    
    cout << cnt << '\n';
    for (auto i : s) {if (i.second) cout << i.first << '\n';}
}