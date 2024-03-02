#include<iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int arr[1001];
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	int huan;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i] < arr[j]) {
				huan = arr[j];
				arr[j] = arr[i];
				arr[i] = huan;
			}
		}//1000 500 1 700
		//500 1000 1 700
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;
}