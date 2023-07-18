#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    vector<int> v(7);
    vector<int> tmp;
    for (auto &i : v) {
        cin >> i;
        if (i%2) {tmp.push_back(i);}
    }
    
    if(tmp.empty()) cout << -1;

    else {
        int sum = accumulate(tmp.begin(),tmp.end(),0);
        cout << sum << '\n' << *min_element(tmp.begin(),tmp.end());
    }
}