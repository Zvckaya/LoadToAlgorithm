#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n, 0);

	for (int i = 0; i < v.size(); i++) {
		v[i] = i+1;
	}
	
	int m;
	cin >> m;

	stack<int> s;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		int cnt = a-1;
		for (int i = a; i <= b; i++) {
			s.push(v[i - 1]);
		}

		while (!s.empty())
		{
			v[cnt] = s.top();
			s.pop();
			cnt++;
		}
		


	}


	for (auto i : v) {
		cout << i << " ";
	}

}