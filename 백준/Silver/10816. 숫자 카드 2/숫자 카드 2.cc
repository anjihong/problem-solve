#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[10000001]={0,};
int arr2[10000001]={0,};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if (n>=0) arr[n]++;
        else arr2[-1*n]++;
    }
    int m; cin >> m;
    while (m--) {
        int n; cin >> n;
        if (n>=0) cout << arr[n] << " ";
        else cout << arr2[-1*n] << " ";
    }
}