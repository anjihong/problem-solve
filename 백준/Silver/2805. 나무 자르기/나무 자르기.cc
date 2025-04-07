#include <bits/stdc++.h>

using namespace std;

long long minL, maxL;
long long ans;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    long long n, m;
    cin >> n >> m;
    vector<int> trees(n);
    for (auto &tree : trees) {
        cin >> tree;
    }

    minL = 0, maxL = *max_element(trees.begin(), trees.end());
    while (minL <= maxL) {
        long long mid = (minL + maxL)/2;
        long long sum = 0;
        for (auto t: trees) {
            if (t > mid) sum += t - mid;
        }
        if (sum >= m) {
            ans = mid;
            minL = mid + 1;
        }

        else {
            maxL = mid - 1;
        }
    }

    cout << ans;

}