#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, e, f;
    int rx=0, ry = 0;
    cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999; x < 1000; x++) {
        for (int y = -999; y < 1000; y++) {
            if ((a * x) + (b * y) == c && (d * x) + (e * y) == f)
            {
                
                rx = x;
                ry = y;
            }
        }
    }

    cout << rx <<" "<< ry;
}