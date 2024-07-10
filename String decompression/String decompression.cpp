#include <iostream>
#include <string>

using namespace std;


int decompressString(string s) {
    int tmp = 0;


    bool isMulti = false;

    for (int i = s.length()-1; i >= 0; i--) {
        if (isMulti) {
            tmp = (s[i] - '0') * tmp;
            isMulti = false;
        }
        else {
            if (isdigit(s[i])) {
                tmp++;
            }
            else if (s[i] == '(') {
                isMulti = true;
                continue;
            }
        }
   }

    return tmp;
}

int main() {
    string s;
    cin >> s;
    cout << decompressString(s) << endl;
    return 0;
}
