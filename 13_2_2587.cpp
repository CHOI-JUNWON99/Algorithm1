#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int num;
	int sum = 0;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
		arr[i] = num;
	}
	int avg = sum / 5;
	cout << avg << "\n";
	
	int min = 100;
	int distance;
	int check;
	for (int i = 0; i < 5; i++) {
		distance = avg - arr[i];
		if (distance < 0) {
			distance = -distance;
		}
		if (distance < min) {
			min = distance;
			check = i;
		}
	}
	cout << arr[check];
}