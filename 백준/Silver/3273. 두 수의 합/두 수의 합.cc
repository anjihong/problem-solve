#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    map<int,int> m;
    
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        m.insert({a,i});
    }

    int x; cin >> x;
    

    int cnt = 0;
    for (auto i : m) {
        int target = x-i.first;
        if (target != i.first && m.find(target) != m.end()) {cnt++;}
    }
    cout << cnt/2;
}