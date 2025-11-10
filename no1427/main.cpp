#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	vector<int> v(s.length());

	for (int i = 0; i < s.length(); i++) {
		v[i] = s[i] - '0';
	}

	sort(v.begin(), v.end(), [](int a, int b) {return a > b; });
	
	for (auto i : v) {
		cout<<i;
	}
}