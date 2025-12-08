#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int C;
        cin >> C;

        int q = C / 25;  // Quarter
        C %= 25;

        int d = C / 10;  // Dime
        C %= 10;

        int n = C / 5;   // Nickel
        C %= 5;

        int p = C;       // Penny

        cout << q << " " << d << " " << n << " " << p << "\n";
    }

    return 0;
}
