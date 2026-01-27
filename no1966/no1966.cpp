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

		queue<pair<int, int>>q;
		priority_queue<int> priority;

		for (int i = 0; i < N; i++)
		{
			int x;
			cin >> x;
			q.push({ x,i });
			priority.push(x);
		}
		
		
		int ans = 0;

		while(!q.empty())
		{
			int a = q.front().first;
			int b = q.front().second;
			q.pop();
			if (priority.top()==a)
			{
				priority.pop();
				ans++;
				if (b == M)
				{
					cout << ans << "\n";
					break;
				}
			}
			else {
				q.push({ a,b });
			}
		}
	}


	return 0;

}
