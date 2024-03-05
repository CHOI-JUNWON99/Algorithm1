#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int num;
	vector<int> a;
	for (int i = 0; i < N; i++) {
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < N; i++) {
		cout << a[i] << '\n';
	}
}