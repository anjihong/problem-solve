#include <bits/stdc++.h>

using namespace std;
int a[2][6];

int main() {
    int cnt = 0;
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k; cin >> n >> k;
    while (n--) {
        int s, g; cin >> s >> g;
        a[s][g-1]++;
        if (a[s][g-1] %k == 1) cnt ++;
    }
    cout << cnt;
}