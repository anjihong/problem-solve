#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    vector<int> v(t);
    for (auto &i : v) {cin >> i;}
    sort(v.begin(),v.end());
    for (auto &i : v) {cout << i << '\n';}
}