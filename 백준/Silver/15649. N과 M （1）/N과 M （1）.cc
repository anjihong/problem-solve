#include <bits/stdc++.h>

using namespace std;

vector<int> nums;
bool vis[9];
int n, m;

void makeCom(int cnt) {
    if (cnt == m) {
        for (auto n : nums) cout << n << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vis[i] = true;
            nums.push_back(i);

            makeCom(cnt + 1);
            
            vis[i] = false;
            nums.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    makeCom(0);
} 