#include <iostream>
#include <vector>
#include <algorithm>
#include "no12891.h"
using namespace std;


int charToIndex(char c) {
	switch (c) {
		{
			case 'A':return 0;
			case 'C':return 1;
			case 'G':return 2;
			case 'T':return 3;
		}
		return -1;
	}
}

bool check(const vector<int>& current, const vector<int>& minimum) {
	for (int i = 0; i < 4; i++) {
		if (current[i] < minimum[i]) 
			return false;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int S, P;
	int result = 0;
	cin >> S >> P;
	string password;
	cin >> password;

	vector<int> minRequired(4);
	for (int i = 0; i < 4; i++) {
		cin >> minRequired[i];
	}

	vector<int> currentCount(4, 0);

	for (int i = 0; i < P; i++) {
		currentCount[charToIndex(password[i])]++;
	}

	if (check(currentCount, minRequired))
		result++;

	for(int start=1;start<=S-P;start++){

		int end = start + P - 1;

		int outIdx = charToIndex(password[start - 1]);
		int inIdx = charToIndex(password[end]);

		currentCount[outIdx]--;
		currentCount[inIdx]++;

		if (check(currentCount, minRequired)) result++;
	
	}

	cout << result;

	

}
