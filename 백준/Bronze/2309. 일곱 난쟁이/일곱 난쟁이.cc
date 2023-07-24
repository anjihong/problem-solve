#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> v(9);
    int sum = 0;
    for (int& i : v) {
        cin >> i;
        sum += i;
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 1; i + j < 9; j++) {
            if (sum - v[i] - v[i+j] == 100) {
                v.erase(v.begin() + i);
                v.erase(v.begin() + i+j-1);
                sort(v.begin(), v.end());
                for (int num : v) {
                    cout << num << '\n';
                }
                return 0;
            } 
        }
    }    
}