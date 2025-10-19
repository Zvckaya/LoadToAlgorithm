#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int n, answer = 0;
	cin >> n;

	vector<int> v;
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	int t;
	cin >> t;
	for (auto i : v) {
		if (i == t)
			answer++;
	}

	cout << answer;

}