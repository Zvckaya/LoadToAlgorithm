#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;


int main()
{

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		unordered_map<string, int> clothes;
		
		for (int i = 0; i < n; i++) {
			string name, type;
			cin >> name >> type;
			clothes[type]++;
		}

		int result = 1;

		for (auto c : clothes)
		{
			result *= (c.second + 1);
		}

		result -= 1;

		cout << result << endl;

	}

}

