//bfs
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int M, N, K;
        cin >> M >> N >> K; 


        vector<vector<int>> grid(N, vector<int>(M, 0));

        vector<vector<bool>> visited(N, vector<bool>(M, false));


        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;  
            grid[y][x] = 1;  
        }

    
        int wormCount = 0;

 
        int dx[4] = { 0, 0, -1, 1 };
        int dy[4] = { -1, 1, 0, 0 };


        for (int r = 0; r < N; r++) {
            for (int c = 0; c < M; c++) {
               
                if (!visited[r][c] && grid[r][c] == 1) {
                    wormCount++;

                  
                    queue<pair<int, int>> q;
                    q.push({ r, c });
                    visited[r][c] = true;

                    while (!q.empty()) {
                        auto [curR, curC] = q.front();
                        q.pop();

                  
                        for (int i = 0; i < 4; i++) {
                            int nr = curR + dy[i];
                            int nc = curC + dx[i];

             
                            if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
                     
                                if (grid[nr][nc] == 1 && !visited[nr][nc]) {
                                    visited[nr][nc] = true;
                                    q.push({ nr, nc });
                                }
                            }
                        }
                    }
                }
            }
        }

        cout << wormCount<< "\n";
    }

    return 0;
}

//dfs
// 
//#include <iostream>
//#include <vector>
//using namespace std;
//
//static const int MAX = 50;
//int M, N, K;
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//
//
//void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
//	visited[r][c] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int nr = r + dy[i];
//		int nc = c + dx[i];
//
//		if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
//			if (grid[nr][nc] == 1 && !visited[nr][nc]) {
//				dfs(nr, nc, grid, visited);
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	while (T--) {
//		cin >> M >> N >> K;
//
//
//		vector<vector<int>> grid(N, vector<int>(M, 0));
//		vector<vector<bool>> visited(N, vector<bool>(M, false));
//
//
//		for (int i = 0; i < K; i++) {
//			int x, y;
//			cin >> x >> y;
//			grid[y][x] = 1;
//		}
//
//		int wormCount = 0;
//
//
//		for (int r = 0; r < N; r++) {
//			for (int c = 0; c < M; c++) {
//				if (grid[r][c] == 1 && !visited[r][c]) {
//					wormCount++;
//
//					dfs(r, c, grid, visited);
//				}
//			}
//		}
//
//		cout << wormCount << "\n";
//	}
//
//	return 0;
//}