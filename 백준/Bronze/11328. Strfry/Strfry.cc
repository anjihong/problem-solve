#include <bits/stdc++.h>

using namespace std;
int arr[26];
int arr2[26];

void possible() {
    for (int i = 0; i < 26; i++) {
        if (arr[i]!=arr2[i]) {cout << "Impossible\n"; return;}
    }
    cout << "Possible\n";    
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;
    while (n--) {
        fill(arr, arr+26, 0);
        fill(arr2, arr2+26, 0);
        string s1,s2;
        cin >> s1 >> s2;
        for (auto &i : s1) {
            arr[i-'a']++;
        }
        for (auto &j : s2) {
            arr2[j-'a']++;
        }
        
        possible();
    }
}