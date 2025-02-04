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

	int N;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].second >> v[i].first;
	}
	sort(v.begin(), v.end());
	int cnt = 1;
	int end = v[0].first;
	for (int i = 1; i < N; i++) {
		if (v[i].second >= end) {
			cnt++;
			end = v[i].first;
		}
	}
	cout << cnt << '\n';
	return 0;
}

