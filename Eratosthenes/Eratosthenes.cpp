#include <iostream>
using namespace std;

int main()
{
	const int N = 100;

	bool is_prime[N];

	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2;i< 100;i++) {
		is_prime[i] = true;
	}

	for (int i = 2; i < N; i++) {
		if (is_prime) {
			for (int j = i * 2; j < N; j += j) {
				is_prime[j] = false;
			}
		}
	}

	for (int i = 2; i <= N; ++i) {
		if (is_prime[i]) {
			cout << i << " 소수입니다.\n";
		}
		else {
			cout << i << " 소수가 아닙니다.\n";
		}
	}


}

