#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    list<char> lst;
    string s; cin >> s;
    for (char i : s) {
        lst.push_back(i);
    }
    list<char>::iterator it = lst.end();
    int n; cin >> n;
    while (n--) {
        char c; cin >> c;
        if(c=='L') {
            if (it != lst.begin()) it--;
        }

        if(c=='D') {
            if (it != lst.end()) it ++;
        }

        if(c=='B' && it != lst.begin()) {
            it=lst.erase(--it);
        }

        if(c=='P') {
            char s; cin >> s;
            lst.insert(it,s);
        }
    }
    for (auto i : lst) {
        cout << i;
    }

}