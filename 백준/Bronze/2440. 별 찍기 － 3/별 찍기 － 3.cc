#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = i; j>0; j--) {
            cout << "*";
        }
        cout << '\n';
    }
}