#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool decs(int a, int b) {
	return a > b;
}

int main() {
	long long int N;
	cin >> N;
	int num;
	vector <int> a;
	while (N > 0) {
		num = N % 10;
		N = N / 10;
		a.push_back(num);
	}

	sort(a.begin(), a.end(), decs);
	
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}
	
	return 0;
}