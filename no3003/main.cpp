#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v(6, 0);

    for (int i = 0; i < v.size(); i++) {
        int temp;
        cin >> temp;
        if (i == 0) {
            if (temp == 0) {
                v[i] = 1;
            }
            else {
                v[i] = 1 - temp;
            }
        }
        else if (i == 1) {
            if (temp ==0) {
                v[i] = 1;
            }
            else {
                v[i] = 1 - temp;
            }
        }
        else if (i == 2) {
            if (temp == 0) {
                v[i] = 2;
            }
            else {
                v[i] = 2 - temp;
            }
        }
        else if (i == 3) {
            if (temp == 0) {
                v[i] = 2;
            }
            else {
                v[i] = 2 - temp;
            }
        }
        else if (i == 4) {
            if (temp == 0) {
                v[i] = 2;
            }
            else {
                v[i] = 2 - temp;
            }
        }
        else {
            if (temp == 0) {
                v[i] = 8;
            }
            else {
                v[i] = 8 - temp;
            }
        }
    }

    for (auto i : v) {
        cout << i << " ";
    }
}