#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


long long Z(int N, int r, int c) {

    if (N == 0) {
        return 0;
    }

    int half = pow(2, N - 1); 

    int blockSize = pow(2, 2*(N-1));

    int idx = 0;

    if (r >= half) {
        idx += 2;       
        r -= half;      
    }

    if (c >= half) {
        idx += 1;       
        c -= half;      
    }


    return idx * blockSize + Z(N - 1, r, c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int r, c;
    cin >> N >> r >> c;

    cout << Z(N, r, c) << "\n";
    return 0;
}