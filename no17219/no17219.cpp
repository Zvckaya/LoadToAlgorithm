#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;

	unordered_map<string,string> sites;
	for (int i = 0; i < N; i++) {
		string site, password;
		cin >> site >> password;
		sites[site] = password;
	}
	vector<string> answer;

	for (int i = 0; i < M; i++) {
		string find = "";
		cin >> find;
		answer.push_back(sites[find]);
	}

	for (auto i : answer) {
		cout << i << endl;
	}


}

