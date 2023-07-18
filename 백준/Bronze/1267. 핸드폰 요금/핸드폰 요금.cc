#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    int y = 0; int m = 0;
    while (n--) {
        int num; cin >> num;
        y += (num/30 +1)*10;
        m += (num/60 +1)*15; 
    }
    if (y < m) cout << "Y " << y;
    else if (y == m) cout << "Y M " << y;
    else  cout << "M " << m;  
}