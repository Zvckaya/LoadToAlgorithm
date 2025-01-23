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

    int countZero = 0;

    for (long long p = 5; p <= N; p *= 5) {
        countZero += N / p;
    }

    cout << countZero << "\n";
    return 0;

}
