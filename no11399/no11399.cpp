#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);



	int N;
	cin >> N;
	int result = 0;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());


	result = arr[0];

	for (int i = 1; i < N; i++)
	{
		arr[i] += arr[i - 1];
		result += arr[i];
	}

	cout << result << "\n";



}

