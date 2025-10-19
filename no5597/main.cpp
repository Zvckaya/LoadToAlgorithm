
#include <iostream>
#include <vector>
using namespace std;

int getValue(char c) {
    if (c >= 'A' && c <= 'C')
        return 2;
    else if (c >= 'D' && c <= 'F')
        return 3;
    else if (c >= 'G' && c <= 'I')
        return 4;
    else if (c >= 'J' && c <= 'L')
        return 5;
    else if (c >= 'M' && c <= 'O')
        return 6;
    else if (c >= 'P' && c <= 'S')
        return 7;
    else if (c >= 'T' && c <= 'V')
        return 8;
    else if (c >= 'W' && c <= 'Z')
        return 9;
    else
        return 0;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int cnt = 0;
    int sum = 0;
    while (cnt!=s.length())
    {
        sum += getValue(s[cnt]) + 1;
        cnt++;
    }
    cout << sum;
}