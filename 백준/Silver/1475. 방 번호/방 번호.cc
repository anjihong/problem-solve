#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s1;
    cin >> s1;
    
    vector<int> arr(10);
    int nineSix = 0;

    for (auto i : s1) {
        if (i == '6' || i == '9') nineSix++;
        else arr[i-'0'] ++;
    }

    int cnt = *max_element(arr.begin(), arr.end()); 
    if (nineSix && (cnt < nineSix/2 + 0.5)) cnt = nineSix/2 + nineSix%2;
    cout << cnt;
}