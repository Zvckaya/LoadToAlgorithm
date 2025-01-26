#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;  
    cin >> n >> m;

    vector<vector<int>> mp(n, vector<int>(m));

    vector<vector<int>> dist(n, vector<int>(m, -1));

    int startX = -1, startY = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 2) {
                startX = i;
                startY = j;
            }
        }
    }

    queue<pair<int, int>> q;
    dist[startX][startY] = 0;
    q.push({ startX, startY });

    int dx[4] = { 1, -1, 0, 0 };
    int dy[4] = { 0, 0, 1, -1 };

    while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (mp[nx][ny] != 0 && dist[nx][ny] == -1) {
    
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({ nx, ny });
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mp[i][j] == 0) {
      
                cout << 0 << " ";
            }
            else {

                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
