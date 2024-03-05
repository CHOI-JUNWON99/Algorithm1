#include <iostream>
#include<algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int num;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		cout << arr[i];
	}
	delete arr;
}