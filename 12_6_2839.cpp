#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a = N / 5;
	int b = 0;
	
	while (1) {
		if (a < 0) {
			cout << "-1";
			return 0;
		}
		if ((N - (5 * a)) % 3 == 0) {
			b = ((N - (5 * a)) / 3);
			break;
		}
		a--;
	}
	cout << a + b;
}