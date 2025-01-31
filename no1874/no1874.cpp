#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;


int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	stack<int> st;
	vector<char> result;
	int idx = 0;
	for (int i = 1; i <= N; i++) {
		st.push(i);
		result.push_back('+');
		while (!st.empty() && st.top() == v[idx]) {
			st.pop();
			result.push_back('-');
			idx++;
		}
	}
	if (!st.empty()) {
		cout << "NO\n";
	}
	else {
		for (char c : result) {
			cout << c << '\n';
		}
	}
	return 0;


}

