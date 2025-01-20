#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int white = 0;
int blue = 0;
vector<vector<int>> square;


void divedePapaer(int row, int col, int size) {
	int first = square[row][col];
	bool isAlllSame = true;
	for (int i = row; i < row + size; i++) {
		for (int j = col; j < col + size; j++) {
			if (first != square[i][j]) {
				isAlllSame = false;
				break;
			}
		}
		if (!isAlllSame) {
			break;
		}
	}

	if (isAlllSame) {
		if (first == 0) {
			white++;
		}
		else {
			blue++;
		}
		return;
	}

	int half = size / 2;
	divedePapaer(row, col, half);
	divedePapaer(row, col + half, half);
	divedePapaer(row + half, col, half);
	divedePapaer(row + half, col + half, half);
}


int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	square.assign(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> square[i][j];
		}
	}

	divedePapaer(0, 0, N);

	cout << white << "\n" << blue << "\n";

	return 0;

}
