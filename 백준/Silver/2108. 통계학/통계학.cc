#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t; cin >> t;
    vector<int> v;
    map<int,int> m;
    double total = 0;
    while (t--) {
        int n; cin >> n;
        v.push_back(n);
        total += n;
        if (m.find(n) == m.end()) m[n] = 1;
        else (*m.find(n)).second++;
    }
    int s = v.size();
    sort(v.begin(), v.end());

    double ave = total / s;
    int mid = v[s/2];
    int ran = v[s-1] - v[0];
    
    int max_key;
    int max_num = 0;
    bool flag = 0;
    for (auto it = m.begin(); it != m.end(); it++) {

        if ((*it).second > max_num) {
            max_key = (*it).first;
            max_num = (*it).second;
            flag = 0;
        }
        else if ((*it).second == max_num && !flag) {
            max_key = (*it).first;
            max_num = (*it).second;
            flag = 1;
        }
    }
    ave = round(ave) == -0 ? 0 : round(ave); 
    cout << ave << '\n' << mid << '\n' << max_key << '\n' << ran;

}