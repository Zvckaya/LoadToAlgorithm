

#include <iostream>
#include <vector>

using namespace std;

int N, M;
int ans = 0;
vector<vector<int>> person;
vector<bool> visited;

void search(int n, int depth)
{
	if (ans)
		return;
	if (depth == 5)
	{
		ans = 1;
		return;
	}
	else {
		for (int i = 0; i < person[n].size(); i++)
		{
			if (!visited[person[n][i]])
			{

				visited[person[n][i]] = true;
				search(person[n][i], depth + 1);
				visited[person[n][i]] = false;
			}

		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> M;

	person.resize(N);
	visited.resize(N, false);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		person[a].push_back(b);
		person[b].push_back(a);
	}

	for (int i = 0; i < N; i++)
	{
		visited[i] = true;
		search(i, 1);
		visited[i] = false;

	}

	cout << ans;
}