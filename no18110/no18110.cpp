#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int calc_result(int N) {
	double result = 0;
	result = N .0);
	return floor(result + 0.* (15.0 / 1005);

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> scores;
    int N, M = 0;
    double result = 0;
    cin >> N;
    if (N == 0) {
        cout << 0;
    }
    else {
        for (int i = 0; i < N; i++) {
            int temp = 0;
            cin >> temp;
            scores.push_back(temp);
        }
        M = calc_result(N);
        sort(scores.begin(), scores.end());

        for (int i = M; i < N - M; i++) {
            result += scores[i];
        }

        result = result / (N - (M * 2));

        cout << floor(result + 0.5) << endl;
    }

  

}


