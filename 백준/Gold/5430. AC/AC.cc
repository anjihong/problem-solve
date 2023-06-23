#include <bits/stdc++.h>

using namespace std;

void print(deque<int>& q, int flag) {
    if (flag==0) cout << "error\n";
    else if (q.empty()) cout << "[]\n";
    else if (flag>0) {
        cout << '[' << q.front();
        for (int i = 1; i < q.size(); i++) {
            cout << ',' << q[i];
        }
        cout << "]\n";
    } 
    else if (flag<0) {
        cout << '[' << q.back();
        for (int i = q.size()-2; i>=0; i--) {
            cout << ',' << q[i];
        }
        cout << "]\n";
    }
}

void solve() {
    deque<int> q;
    string s; cin >> s;
    int n; cin >> n;
    int flag = 1;
    string ans; cin >> ans;
    int num=0;
    if (n) {
        for (auto i : ans) {
            if (i>='0' && i<='9') {
                num = num*10 + i-48;
            }
            else if (i==',' || i ==']') {
                q.push_back(num);
                num = 0;
            }
        }
    }
    for (auto i : s) {
        if (i == 'R') flag *= -1;
        else if (q.empty()) {
            flag = 0;
            break;
        }
        else {
            if (flag>0) {
                q.pop_front();
            }
            else {
                q.pop_back();
            }
        }
    }
    print(q, flag);
}


int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}