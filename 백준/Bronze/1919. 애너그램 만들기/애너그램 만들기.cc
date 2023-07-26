#include <bits/stdc++.h>

using namespace std;
int arr1[26];
int arr2[26];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s1, s2;
    int cnt=0;
    cin >> s1 >> s2;
    
    for (char i : s1) {arr1[i-'a']++;}
    for (char i : s2) {arr2[i-'a']++;}

    for (int i=0; i<26; i++) {
        cnt += abs(arr1[i]-arr2[i]);
    }

    cout << cnt;

}