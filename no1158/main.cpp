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

	int N, K;
	cin >> N >> K;
	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	int cnt = 0;

	cout << "<";
	while (!q.empty())
	{
		if (cnt == K-1)
		{
			if (q.size()==1)
			{

				cout << q.front();
			}
			else {

				cout << q.front() << ", ";
			}
			q.pop();
			cnt = 0;
		}
		else {
			int k = q.front();
			q.push(k);
			q.pop();
			cnt++;
		}
	}
	cout << ">";

}