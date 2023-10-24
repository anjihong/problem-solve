#include <bits/stdc++.h>

using namespace std;
queue<int> current;
stack<int> waiting;
int idx = 1;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        current.push(num);
    }

    while(!current.empty()) {
        if (current.front() == idx) {
            current.pop();
            idx++;
        } 
        else if (!waiting.empty() && waiting.top() == idx) {
            waiting.pop();
            idx++;
        }
        else {
            waiting.push(current.front());
            current.pop();
        }

    }


    while (!waiting.empty()) {
        if (waiting.top() != idx) {
            cout << "Sad";
            return 0;
        }
        waiting.pop();
        idx++;
    }

    cout << "Nice";
}