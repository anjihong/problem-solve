#include <bits/stdc++.h>

using namespace std;

int ans;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int k, n;
    cin >> k >> n;
    vector<int> lan(k);
    for (auto &l : lan) cin >> l;

    long long minL = 1, maxL = *max_element(lan.begin(), lan.end());
    while (minL <= maxL) {
        long long midL = (minL+maxL)/2;
        int sum = 0;
        for (auto l : lan){
            sum += l/midL;
        }

        if (sum >= n) {
            ans = midL;
            minL = midL + 1;
        }
        else maxL = midL - 1;
    }

    cout << ans;
    
}