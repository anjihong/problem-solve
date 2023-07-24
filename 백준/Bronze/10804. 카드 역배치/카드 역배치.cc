#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> v(20);
    iota(v.begin(), v.end(), 1);
    for (int i = 0; i < 10; i++) {
        int a, b; cin >> a >> b;
        reverse(v.begin()+a-1, v.begin()+b);
    }
    
    for (auto i : v) {
        cout << i << ' ';
    }

}