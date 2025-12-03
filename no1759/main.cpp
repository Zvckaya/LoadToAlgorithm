//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//
//
//vector<char> v;
//vector<bool> u;
//set<char> s = { 'a', 'e', 'i', 'o', 'u' };
//int L, C;
//
//vector<pair<int, char>> a;
//
//void search() {
//
//	if (a.size() == L) {
//		int acount = 0, bcount = 0;
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i].second == 'a' || a[i].second == 'u' || a[i].second == 'e' || a[i].second == 'i' || a[i].second == 'o') {
//				acount++;
//			}
//			else bcount++;
//
//		}
//		if (acount < 1 || bcount < 2) return;
//
//		for (auto i : a)
//		{
//			cout << i.second;
//		}
//		cout << "\n";
//
//
//		return;
//	}
//	else {
//		for (int i = a.empty() ? 0 : a.back().first + 1; i < C; i++) {
//
//			a.push_back({ i ,v[i] });
//			search();
//			a.pop_back();
//
//		}
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> L >> C;
//	v.resize(C);
//	u.resize(C);
//
//	for (int i = 0; i < C; i++)
//	{
//		cin >> v[i];
//		u[i] = false;
//	}
//
//	sort(v.begin(), v.end());
//
//
//	search();
//
//
//
//
//}

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;



vector<char> v;
vector<bool> u;
set<char> s = { 'a', 'e', 'i', 'o', 'u' };
int L, C;

vector<pair<int, char>> a;

void search() {

	if (a.size() == L) {
		int ac = 0, bc = 0;
		for (int i = 0; i < a.size(); i++) {
			if (s.find(a[i].second) != s.end())
			{
				bc++;
			}
			else {
				ac++;
			}
		}
		if (ac < 2 || bc < 1) return;


		for (auto i : a)
		{
			cout << i.second;
		}

		cout << "\n";


		return;
	}
	else {
		for (int i = a.empty() ? 0 : a.back().first + 1; i < C; i++) {

			a.push_back({ i ,v[i] });
			search();
			a.pop_back();

		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> L >> C;
	v.resize(C);
	u.resize(C);

	for (int i = 0; i < C; i++)
	{
		cin >> v[i];
		u[i] = false;
	}

	sort(v.begin(), v.end());


	search();




}

//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//
//
//vector<char> v;
//vector<bool> u;
//set<char> s = { 'a', 'e', 'i', 'o', 'u' };
//int L, C;
//
//vector<char> a;
//
//void search() {
//
//	if (a.size() == L) {
//		int ac = 0, bc = 0;
//		for (int i = 0; i < a.size(); i++) {
//			if (s.find(a[i]) != s.end())
//			{
//				bc++;
//			}
//			else {
//				ac++;
//			}
//		}
//		if (ac < 2 || bc < 1) return;
//
//
//		for (auto i : a)
//		{
//			cout << i;
//		}
//
//		cout << "\n";
//
//
//		return;
//	}
//
//	else {
//		for (int i = 0; i < C; i++) {
//
//			if (!u[i]) {
//				u[i] = true;
//				a.push_back(v[i]);
//				search();
//				u[i] = false;
//				a.pop_back();
//			}
//
//		}
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	cin >> L >> C;
//	v.resize(C);
//	u.resize(C);
//
//	for (int i = 0; i < C; i++)
//	{
//		cin >> v[i];
//		u[i] = false;
//	}
//
//	sort(v.begin(), v.end());
//
//
//	search();
//
//
//
//
//}
