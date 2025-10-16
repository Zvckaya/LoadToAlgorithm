#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        for (int m = 1; m <i ;m++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++) {
            cout << "*";
        }
        for (int m = 1; m < n - i; m++) {
            cout << "*";
        }
        cout << endl;
    }
}