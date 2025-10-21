#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    int B;
    if (!(cin >> N >> B)) return 0;

    long long ans = 0;
    for (char c : N) {
        int v;
        if ('0' <= c && c <= '9') v = c - '0';
        else {
            c = toupper(static_cast<unsigned char>(c)); 
            v = c - 'A' + 10;
        }
        ans = ans * B + v;
    }
    cout << ans << '\n';
    return 0;
}