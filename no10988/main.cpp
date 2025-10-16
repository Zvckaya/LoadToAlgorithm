#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    string s;
    cin >> s;
    bool b = true;
    int length = s.length();

    for (int i = 0; i < length / 2; i++) {
            if (s[i] != s[length - i - 1])
            {
                b = false;
            }

    }
    
        
    if (b != false) {
        cout << 1;
    }
    else {
        cout << 0;
    }




}