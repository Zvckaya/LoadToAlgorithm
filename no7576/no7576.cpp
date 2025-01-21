#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<vector<int>> tomatos(1001, vector<int>(1001, 0));

	int M, N;
	cin >> M >> N;

	queue<pair<int, int>> q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomatos[i][j];
			if (tomatos[i][j] == 1) {
				q.push({ i, j });
			}
		}
	}

	int dx[4] = { 0, 0, 1, -1 };
	int dy[4] = { 1, -1, 0, 0 };

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
				continue;
			}

			if (tomatos[nx][ny] == 0) {
				tomatos[nx][ny] = tomatos[x][y] + 1;
				q.push({ nx, ny });

			}

		}
	}

	int result = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (tomatos[i][j] == 0) {
				cout << -1 << "\n";
				return 0;
			}
			result = max(result, tomatos[i][j]);
		}
	}

	cout << result  << "\n";

	
}

