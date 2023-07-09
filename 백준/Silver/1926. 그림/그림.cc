#include <bits/stdc++.h>

using namespace std;

int board[501][501];
bool vis[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    queue<pair<int,int>> Q;
    int num = 0;
    int max_area = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] && !vis[i][j]) {
                num ++;
                int area = 1;
                Q.push({i,j});
                vis[i][j] = 1;

                while (!Q.empty()) {
                    pair<int,int> cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] || !board[nx][ny]) continue;
                        area ++;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
                max_area = (area > max_area ? area : max_area);
            }
        }
    }

    cout << num << '\n' << max_area;

}