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


	vector<pair<int, int>> people;
	vector<int> rank;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		people.push_back({ x, y });
	}

	for (int i = 0; i < N; i++) {
		int cnt = 1;
		for (int j = 0; j < N; j++) {
			if (i == j) {
				continue;
			}
			if (people[i].first < people[j].first && people[i].second < people[j].second) {
				cnt++;
			}
		}
		rank.push_back(cnt);
	}


	for (int i = 0; i < N; i++) {
		cout << rank[i] << " ";
	}

	return 0;


}


