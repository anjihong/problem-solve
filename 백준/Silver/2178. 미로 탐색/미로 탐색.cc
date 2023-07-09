#include <bits/stdc++.h>

using namespace std;

string board[102];
int dist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    queue<pair<int,int>> Q;

    Q.push({0,0});
    dist[0][0] = 1;

    while(!Q.empty()) {
        auto [curX, curY] = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] == '0' || dist[nx][ny]) continue;
            dist[nx][ny] = dist[curX][curY] + 1;
            Q.push({nx,ny});
        }
    }
    cout << dist[n-1][m-1];    
}