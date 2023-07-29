#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    stack<pair<int,int>> s;
    
    s.push({1e8+1,0});
    for (int i=1; i<=n; i++) {
        int num; cin >> num;

        while(s.top().first < num) {
            s.pop();
        }
        cout << s.top().second << ' ';
        s.push({num,i});
        
    }

}