#include <vector>
#include <iostream>
#include <string>
using namespace std;
using namespace std;

int R, C, K;
int ans = 0;
pair<int, int> startPos, goal;
vector<vector<pair<char, bool>>> mp;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y, int dist) {
    if (dist > K) return;

    if (x == goal.first && y == goal.second) {
        if (dist == K) ans++;
        return;
    }

    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;

        if (mp[nx][ny].first == 'T') continue;

     
        if (mp[nx][ny].second) continue;

        mp[nx][ny].second = true;
        dfs(nx, ny, dist + 1);
        mp[nx][ny].second = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C >> K;
    mp.resize(R, vector<pair<char, bool>>(C));

    for (int i = 0; i < R; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < C; j++) {
            mp[i][j].first = s[j];
            mp[i][j].second = false;
        }
    }

    startPos = { R - 1, 0 };
    goal = { 0, C - 1 };

    if (mp[startPos.first][startPos.second].first == 'T') {
        cout << 0 << "\n";
        return 0;
    }

    mp[startPos.first][startPos.second].second = true;
    dfs(startPos.first, startPos.second, 1); 
    cout << ans << "\n";
}