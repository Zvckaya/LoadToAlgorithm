#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static const int MAX = 101;
vector<int> graph[MAX];
bool visited[MAX];

void dfs(int cur) {
    visited[cur] = true;
    for (int nxt : graph[cur]) {
        if (!visited[nxt]) {
            dfs(nxt);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int count = 0;

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    for (int i = 2; i <= N; i++) {
        if (visited[i])
            count++;
    }

    cout << count << endl;
    return 0;

}

