#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

float getVal(string grade) {
	if (grade.compare("A+"))
		return 4.5;
	else if (grade.compare("A0"))
		return 4.0;
	else if (grade.compare("B+"))
		return 3.5;
	else if (grade.compare("B0"))
		return 3.0;
	else if (grade.compare("C+"))
		return 2.5;
	else if (grade.compare("C0"))
		return 2.0;
	else if (grade.compare("D+"))
		return 1.5;
	else if (grade.compare("D0"))
		return 1.0;
	else
		return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	float SUM=0, GRADE = 0;

	for (int i = 0; i < 20; i++) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string a, b, c;
		ss >> a >> b >> c;
		float g = stof(b);
		if (c.compare("P")==false) {
			SUM += g;
			GRADE += getVal(c) * g;
		}

	}
	
	cout << SUM / GRADE;

}