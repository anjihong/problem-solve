#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v(101, vector<int> (101));

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    int cnt = 0;
    while (n--) {
        int x, y; cin >> x >> y;
        for (int i=x; i<x+10; i++) {
            for (int j=y; j<y+10; j++) {
                if (!v[i][j]){
                    cnt ++;
                    v[i][j]++;
                }
            }
        }
    }
    cout << cnt;
}