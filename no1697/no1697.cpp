
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

	vector<int> count(100001, -1);
	queue<int> q;

	q.push(N);

	count[N] = 0;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		if (x == K) {
			cout << count[x] << "\n";
			break;
		}
		if (x - 1 >= 0 && count[x - 1] == -1) {
			q.push(x - 1);
			count[x - 1] = count[x] + 1;
		}
		if (x + 1 <= 100000 && count[x + 1] == -1) {
			q.push(x + 1);
			count[x + 1] = count[x] + 1;
		}
		if (2 * x <= 100000 && count[2 * x] == -1) {
			q.push(2 * x);
			count[2 * x] = count[x] + 1;
		}
	}
	return 0;



}

