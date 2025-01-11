#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> grid[1001];
bool visited[1001];
int result = 0;

void dfs(int n) {
	visited[n] = true;
	for (int nxt : grid[n]) {
		if (!visited[nxt])
			dfs(nxt);
	}
}


int main()
{

	int N, M;
	cin >> N >> M;


	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		grid[a].push_back(b);
		grid[b].push_back(a);
	}

	
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			result++;
			dfs(i);
		}
	}

	cout << result;


	
}
