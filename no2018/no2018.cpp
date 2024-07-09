#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int start_index = 1;
	int end_index = 1;
	int count = 1;
	int sum = 1;

	while (N!=end_index)
	{
		if (sum == N) {
			end_index++;
			sum = sum + end_index;
			count++;
		}
		else if (sum > N) {
			sum = sum - start_index;
			start_index++;
		}
		else {
			end_index++;
			sum = sum + end_index;
		}
	}

	cout << count << "\n";

}