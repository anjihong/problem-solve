#include <bits/stdc++.h>

using namespace std;

int n;
string s;

bool is_palindrome(int start, int end) {
    while(start < end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void ans(int start, int end) {
    while(start < end) {
        if(s[start] != s[end]) {
            if(is_palindrome(start+1, end) || is_palindrome(start, end-1)) {
                cout << 1 << '\n';
            } else {
                cout << 2 << '\n';
            }
            return;
        }
        start++;
        end--;
    }
    cout << 0 << '\n';
}


int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    while(n--) {
        cin >> s;
        ans(0, s.size()-1);
    }    
}