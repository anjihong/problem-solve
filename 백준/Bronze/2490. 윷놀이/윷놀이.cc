#include <bits/stdc++.h>

using namespace std;

char arr[5] = {'D','C','B','A','E'};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 3;
    while (n--) {
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            int m; cin >> m;
            if (m) cnt ++;
        }
        cout << arr[cnt] << '\n';
    }
}