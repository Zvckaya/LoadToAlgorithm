﻿#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[5001] = { 0, };

	int cnt = 0;
	while (N >= 0) {
		if (N % 5 == 0) {
			cout << N / 5 + cnt;
			return 0;
		}
		N -= 3;
		cnt++;
	}
	cout << -1;
	return 0;

}

