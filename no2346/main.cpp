#include <string>
#include <deque>
#include <iostream>
using namespace std;

int findNext(int qs,int n) {
	if (n < 0) {
		return qs + n;
	}
	else if(n>=qs) {
		return n - qs;
	}
	else {
		return n;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	deque<int> q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		q.push_back(temp);
	}

	int cs = 0;
	int qs = N-1;
	for (int i = 0; i < N; i++) {
		int nc = findNext(qs,cs + q[cs]); // 현재 + 다음 값 
		cout << cs+(N-qs) << " ";
		cs = nc;
		qs--;
	}

}