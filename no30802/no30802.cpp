#include <iostream>
#include <vector>
using namespace std;

int countTshirt(const vector<int>& arr, int t) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        count += (arr[i] + t - 1) / t; 
    }
    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T, P;
    cin >> N;
    vector<int> tshirt(6);

    for (int i = 0; i < 6; i++) {
        cin >> tshirt[i];
    }

    cin >> T >> P;

    cout << countTshirt(tshirt, T) << "\n";

    cout << N / P << " " << N % P << "\n";

    return 0;
}
