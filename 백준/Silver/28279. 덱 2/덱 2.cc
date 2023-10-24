#include <bits/stdc++.h>

using namespace std;
deque<int> d;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int op, num; cin >> op;
        switch (op)
        {
        case 1:
            cin >> num;
            d.push_front(num); break;
        case 2:
            cin >> num;
            d.push_back(num); break;
        case 3:
            if (d.empty()) cout << "-1\n";
            else {cout << d.front() << '\n'; d.pop_front();}
            break;
        case 4:
            if (d.empty()) cout << "-1\n";
            else {cout << d.back() << '\n'; d.pop_back();}
            break;
        case 5:
            cout << d.size() << '\n'; break;
            break;
        case 6:
            cout << d.empty() << '\n'; break;
        case 7:
            if (d.empty()) cout << "-1\n"; 
            else cout << d.front() << '\n';
            break;
        case 8:
            if (d.empty()) cout << "-1\n";
            else cout << d.back() << '\n';
            break;
        }
    }
}