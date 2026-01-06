
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	string T;

	cin >> S;
	cin >> T;

	string cur = T;

	while (cur.size()>S.size())
	{
		if (cur.back() == 'A')
		{
			cur.pop_back();
		}
		else {
			cur.pop_back();
			reverse(cur.begin(), cur.end());
		}
	}

	if (S.compare(cur) == 0)
	{
		cout << 1;
	}
	else {
		cout << 0;
	}
	


}