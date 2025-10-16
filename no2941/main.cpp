#include <iostream>
#include <vector>
using namespace std;


bool secondCompare(string s) {
    if (s.compare("c=")==0) {
        return true;
    }
    if (s.compare("c-") == 0) {
        return true;
    }
    if (s.compare("d-") == 0) {
        return true;
    }
    if (s.compare("lj") == 0) {
        return true;
    }
    if (s.compare("nj") == 0) {
        return true;
    }
    if (s.compare("s=") == 0) {
        return true;
    }
    if (s.compare("z=") == 0) {
        return true;
    }
    return false;
}

bool thirdCompare(string s) {
    if (s.compare("dz=") == 0) {
        return true;
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0;
    string s;
    cin >> s;

    int cursor = 0;

    while (cursor < s.length())
    {
        if (cursor < s.length() - 3) {
            if (secondCompare(s.substr(cursor,2))) {
                cursor += 2;
                a++;
            }
            if (secondCompare(s.substr(cursor,3))) {
                cursor += 3;
                a++;
            }
        }
        else if(cursor < s.length() - 2) {
            if (secondCompare(s.substr(cursor,2))) {
                cursor += 2;
                a++;
            }
        }
        else {
            cursor++;
        }
    }
    
    cout << a;





}