#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string str;
	int vpsCount;
	bool isVps;

	for (int i = 0; i < N; i++) {
		vpsCount = 0;
		isVps = true;

		cin >> str;
		for (auto i : str) {
			if (vpsCount < 0)
				isVps = false;

			if (i == '(') {
				vpsCount++;
			}
			else {
				vpsCount--;
			}
		}
		if (vpsCount==0 and isVps==true)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";


	}
}

