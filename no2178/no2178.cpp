#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> maze(N);
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
    }

    vector<vector<int>> dist(N, vector<int>(M, -1));

    queue<pair<int, int>> q;

    dist[0][0] = 1;
    q.push({ 0, 0 });

    int dx[4] = { 1,-1,0,0 };
    int dy[4] = { 0,0,1,-1 };

    while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;

            if (maze[nx][ny] == '1' && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }

    cout << dist[N - 1][M - 1] << "\n";

    return 0;
}
