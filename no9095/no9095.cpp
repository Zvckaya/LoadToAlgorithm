#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> test;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		test.push_back(temp);
	}

	int arr[12] = { 0 };

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	for (auto i : test) {
		cout << arr[i] << endl;
	}
}

