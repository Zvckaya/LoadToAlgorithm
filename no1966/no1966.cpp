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
	int T;
	cin >> T;
	while (T--)
	{
		int N, M;
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int i = 0; i < N; i++)
		{
			int x;
			cin >> x;
			q.push({ x, i });
			pq.push(x);
		}
		int cnt = 0;
		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			if (pq.top() == x)
			{
				pq.pop();
				cnt++;
				if (y == M)
				{
					cout << cnt << '\n';
					break;
				}
			}
			else
			{
				q.push({ x, y });
			}
		}
	}
	return 0;

}
