#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cmath>
#include <string>
using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	while (true) {

		getline(cin, s);

		if (s == ".") {
			break;
		}
		stack<char> st;
		bool flag = true;
		for (char c : s) {
			if (c == '(' || c == '[') {
				st.push(c);
			}
			else if (c == ')') {
				if (st.empty() || st.top() != '(') {
					flag = false;
					break;
				}
				st.pop();
			}
			else if (c == ']') {
				if (st.empty() || st.top() != '[') {
					flag = false;
					break;
				}
				st.pop();
			}
		}
		if (flag && st.empty()) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	return 0;
}

