#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

void dfs(vector<vector<int>> graph, int v, vector<bool>& visited ) {
    visited[v] = true;
    cout << v << " ";
    for (int i = 0; i < graph[v].size(); i++) {
        int next = graph[v][i];
        if (!visited[next]) {
            dfs(graph, next, visited);
        }
    }
}

void bfs(vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int i = 0; i < graph[v].size(); i++) {
            int next = graph[v][i];
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    vector<vector<int>> graph(N+1);//그래프를 표현한 2차원 벡터
    vector<bool> visited(N + 1,false); //방문 여부 


    for (int i = 0; i < M; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    dfs(graph, V, visited);
    cout << "\n";
    bfs(graph, V);


}

