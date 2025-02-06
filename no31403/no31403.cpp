#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B, C;
    cin >> A >> B >> C;

    int aNum = stoi(A);
    int bNum = stoi(B);
    int cNum = stoi(C);

    cout << (aNum + bNum) - cNum << "\n";


    string AB = A + B;        
    int abVal = stoi(AB); 
    int ans = abVal - cNum;
    cout << ans << "\n";

    return 0;
}

