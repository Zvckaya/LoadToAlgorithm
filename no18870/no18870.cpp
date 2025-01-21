#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

struct Compare {
	bool operator()(int a, int b) {
		return a < b;
	}
};


int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<int > v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	vector<int> sorted = v;
	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

	for (int i = 0; i < N; i++) {
		cout << lower_bound(sorted.begin(), sorted.end(), v[i]) - sorted.begin() << ' ';
	}

	return 0;
}


