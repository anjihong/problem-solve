#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> arr;
int binarySearch(int low, int high, int target) {
    int mid, ans;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] >= target) {
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    int x;
    cin >> x; arr.push_back(x); 
    
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > arr.back()) arr.push_back(x); 
        else {
            int idx = binarySearch(0, arr.size()-1, x);
            arr[idx] = x; // arr[-1]보다 작거나 같은 수 중에서 가장 큰 수를 찾는다.
        }
    }

    cout << arr.size();
}