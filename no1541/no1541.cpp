#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> num;
	vector <char> op;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-')
		{
			if (s[i] == '+') {
				op.push_back('+');
			}
			else {
				op.push_back('-');
			}
			continue;
		}
		int n = 0;
		while (i < s.size()&&s[i]!= '+'&&s[i]!='-')
		{
			n = n * 10 + (s[i] - '0');
			i++;
		}
		num.push_back(n);
		i--;
	}

	int ans = num[0];

	bool minus = false;

	for (int i = 0; i < op.size(); i++) {
		if (op[i] == '-') {
			minus = true;

		}
		if (minus == true) {
			ans -= num[i + 1];

		}
		else {
			ans += num[i + 1];
		}
	}


	cout << ans << '\n';
	
	return 0;


}
