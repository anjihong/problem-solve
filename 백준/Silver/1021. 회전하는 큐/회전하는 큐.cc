#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, t; cin >> n >> t;
    deque<int> deq;
    queue<int> que;
    while (t--) {
        int l; cin >> l;
        que.push(l);
    }
    int cnt = 0; int ans=0;
    for (int i = 1; i <=n; i++) {deq.push_back(i);}
    while (!que.empty()) {
        if (deq.front()==que.front()) {
            deq.pop_front();
            que.pop();
            if (cnt > ((deq.size()+1)/2)) cnt = deq.size() + 1 - cnt;
            ans += cnt;
            cnt = 0;
        }
        else {
            int tmp = deq.front();
            deq.pop_front();
            deq.push_back(tmp);
            cnt ++;
        }
    }
    cout << ans ;
}
