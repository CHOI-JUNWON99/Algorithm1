#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int arr[101];
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	int index = 0;
	int min=300000;
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				index = M - (arr[i] + arr[j] + arr[k]);
				if (min > index && index >= 0) {
					min = index;
				}
			}
		}
	}
	cout << M - min;
}