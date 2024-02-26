#include<iostream>
using namespace std;

int main() {
	/*int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int x, y, z;
	int ans1 = 0; 
	int ans2 = 0;
	// ax + by = c;
	//(a * d)x + (b * d)y = d * c;
	//(d * a)x + (e * a)y = f * a;
	if ((a * d) == (d * a)) {
		y == (b * d) - (e - a);
		z == (d * c) - (f * a);
		ans2 == z / y;
		ans1 == ((-b) * ans2 + c)/a;
	}
	else if ((a * d) != (d * a)) {
		y == (b * d) + (e - a);
		z == (d * c) + (f * a);
		ans2 == z / y;
		ans1 == ((-b) * ans2 + c) / a;
	}
	cout << ans1 << " " << ans2;
	*/
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i <= 999; i++) {
		for (int j = -999; j <= 999; j++) {
			if (a * i + b * j == c && d * i + e * j == f) {
				cout << i << " " << j;
			}
		}
	}
	return 0;
}