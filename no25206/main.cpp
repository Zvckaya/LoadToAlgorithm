#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

float getVal(string grade) {
	if (grade.compare("A+")==0)
		return 4.5;
	else if (grade.compare("A0") == 0)
		return 4.0;
	else if (grade.compare("B+") == 0)
		return 3.5;
	else if (grade.compare("B0") == 0)
		return 3.0;
	else if (grade.compare("C+") == 0)
		return 2.5;
	else if (grade.compare("C0") == 0)
		return 2.0;
	else if (grade.compare("D+") == 0)
		return 1.5;
	else if (grade.compare("D0") == 0)
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

		if (c.compare("P") == 0)
			continue;
		else {
			float f = getVal(c);
			GRADE += f * stof(b);
			SUM+= stof(b);
		}

	}
	
	cout << GRADE / SUM;

}