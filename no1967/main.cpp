#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int N;
vector<vector<pair<int, int>>> graph;
vector<bool> visited;
pair<int, int> m = { 0,0 };



void search(int next, int depth) {

	if (visited[next] == true)
		return;


	visited[next] = true;

	if (m.second < depth) {
		m.second = depth;
		m.first = next;
	}

	for (auto i : graph[next]) {
		if (!visited[i.first])
			search(i.first, depth + i.second);
	}

}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	graph.assign(N + 1, {});
	visited.assign(N + 1, false);

	for (int i = 1; i < N; i++) {
		int s, n, w;
		cin >> s >> n >> w;
		graph[s].push_back({ n,w });
		graph[n].push_back({ s,w });
	}

	search(1, 0);
	int fn = m.first;
	m = { 1,0 };
	visited.assign(N + 1, false);
	search(fn, 0);

	cout << m.second;
}