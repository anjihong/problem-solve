#include <bits/stdc++.h>

using namespace std;

queue<int> ans;
void print() {
    cout << "<" << ans.front();
    ans.pop();
    while (!ans.empty()) {
        cout << ", " << ans.front();
        ans.pop();
    }
    cout << ">";
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, k; cin >> n >> k;
    queue<int> q1;
    queue<int> q2;

    bool flag = 0;
    int cnt = 1;

    for (int i = 1; i <= n; i++) {
        if (cnt == k) {
            ans.push(i);
            cnt = 1;
        }
        else {
            q1.push(i);
            cnt ++;
        }
    }

    while (!q1.empty() || !q2.empty()) {

        while (!flag && !q1.empty()) {
            if (cnt == k) {
                ans.push(q1.front());
                q1.pop();
                cnt = 1;
            }
            else {
                q2.push(q1.front());
                q1.pop();
                cnt ++;
            }
            if (q1.empty()) flag = 1;
        }

        while (flag && !q2.empty()) {
            if (cnt == k) {
                ans.push(q2.front());
                q2.pop();
                cnt = 1;
            }
            else {
                q1.push(q2.front());
                q2.pop();
                cnt ++;
            }
            if (q2.empty()) flag = 0;
        }

    }
    print();
}