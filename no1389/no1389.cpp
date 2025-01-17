#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> arr[101];
	vector<int> result;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
		vector<int> visited(N + 1, 0);
		vector<int> dist(N + 1, 0);
		queue<int> q;
		q.push(i);
		visited[i] = 1;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int next : arr[cur]) {
				if (visited[next] == 0) {
					visited[next] = 1;
					dist[next] = dist[cur] + 1;
					q.push(next);
				}
			}
		}
		int sum = 0;
		for (int j = 1; j <= N; j++) {
			sum += dist[j];

		}
		result.push_back(sum);

		
		

    }
	int min = 100000;
	int index = 0;
	for (int i = 0; i < result.size(); i++) {
		if (min > result[i]) {
			min = result[i];
			index = i;
		}
	}
	
	cout << index + 1 << endl;
		
}

