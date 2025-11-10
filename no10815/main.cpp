#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int M;
	cin >> M;
	int temp;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		if (binary_search(v.begin(), v.end(), temp)) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
}