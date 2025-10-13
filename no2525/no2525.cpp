#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nh, nm, am, time = 0;

	cin >> nh >> nm >> am;
	time += nh * 60;
	time += nm + am;

	


	
	if (time < 60 * 24) {
		cout << time / 60 << " " << time % 60;
	}
	else {
		time -= 60 * 24;
		cout << time / 60 << " " << time % 60;
	}


}