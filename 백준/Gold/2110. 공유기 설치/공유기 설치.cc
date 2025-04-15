#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> house;

bool is_possible(int mid) {
    int last_position = house[0];
    int cnt = 1;
    
    for (int i = 1; i < n; i++) {
        if (house[i] - last_position >= mid) {
            cnt++;
            last_position = house[i];
        }
    }
    return cnt >= c;
}

int binary_search(int low, int high) {
    int max_dist = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (is_possible(mid)) {
            max_dist = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return max_dist;
}


int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> c;
    house.resize(n);

    for (int i = 0; i < n; i++) cin >> house[i];
    sort(house.begin(), house.end());
    
    int low = 1, high = house[n-1] - house[0]; 
    cout << binary_search(low, high) << "\n";
}