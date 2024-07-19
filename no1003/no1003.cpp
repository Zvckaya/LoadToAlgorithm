#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int arr[41] = { 0,1 };
	for (int i = 2; i < 41; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}


	for (int i = 0; i < N; i++) {
		int temp = 0;
		cin >> temp;
		cout << arr[temp - 1] << " " << arr[temp] << "\n";

	}
}

