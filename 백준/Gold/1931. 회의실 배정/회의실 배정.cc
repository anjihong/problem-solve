#include <bits/stdc++.h>

using namespace std;
int n;
vector<pair<int, int>> arr; // pair<시작시간, 끝시간>
int finish_time = 0, ans; // 끝나는 시간



int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n; arr.resize(n);
    for (auto &x : arr) cin >> x.second >> x.first;

    sort(arr.begin(), arr.end()); // 끝나는 시간이 빠른 순서로 정렬
    for (auto x : arr) {
        if (x.second >= finish_time) { 
            finish_time = x.first;
            ans++;    
        }
    }

    cout << ans;
}