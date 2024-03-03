#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	int k;
	cin >> N;
	cin >> k;
	int arr[1000];
	for (int i = 0; i < N; i++) {
		int score;
		cin >> score;
		arr[i] = score;
	}
	sort(arr, arr + N);
	
	cout << arr[N - k];

}