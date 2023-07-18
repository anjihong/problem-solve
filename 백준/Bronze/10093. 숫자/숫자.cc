#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m; cin >> n >> m;
    
    if (n == m) {
        cout << 0;
        return 0;
    }

    int min = (n < m ? n : m);
    int max = (n < m ? m : n);
    cout << max - min - 1 << '\n';
    for (int i = min + 1; i < max; i++) {
        cout << i << " ";
    }

}