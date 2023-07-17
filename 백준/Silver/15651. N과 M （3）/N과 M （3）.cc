#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
int n,m; 

void dfs(int cnt, vector<int>v, vector<int>s){
    if (cnt == m) {
        for (auto i: s) cout << i << " ";
        cout << "\n";
        return ;
    } 

    for (int i = 0; i<n; i++ ){
        s[cnt] = v[i];
        dfs(cnt+1, v, s);
    }
}

int main() {
    cin >> n >> m;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    vector<int> select(m);
    dfs(0,v,select);
}