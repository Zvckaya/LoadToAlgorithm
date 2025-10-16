#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a=0, b=0,sum=0;
	cin >> a >> b;
	
	cout << a * (b % 10)<<endl;


	cout << (a * (b % 100 - (b % 10)))/10 << endl;


	cout << (a * (b / 100))  << endl;


	cout << a * b;



}