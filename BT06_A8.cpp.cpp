#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	int mark = 1;
	while (count<=n) {
		cout << '[';
		for (int i = 1; i <= count; i++) {
			for (int j = mark; j <= count; j++) {
				cout << j;
				if (j != n)cout << ',';
			}
			cout << i;
			cout << ']' << endl;
		}
		
		count++;
	}
	return 0;
}