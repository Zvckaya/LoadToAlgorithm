#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> cards;

	int N, M;
	cin >> N;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		cards[tmp]++;
	}

	cin >> M;
	for (int j = 0; j < M; j++) {
		cin >> tmp;
		if (cards.find(tmp) != cards.end())
			cout << cards[tmp] << " ";
		else
			cout << 0 <<" ";
	}
}

