#include<iostream>
#include<string>
using namespace std;

int find(int N) {
	
	int i = 666;
	string target;
	int count = 0;
	while (1) {
		target = to_string(i);
		for (int j = 0; j < target.length()-2; j++) { //j<target.length()-2를 생각하기가 오래걸렸다.
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
				count++;
				if (count == N)
					return i;
				break;				
			}
		}
		i++;
	}
}

int main() {
	int N;
	cin >> N;
	cout << find(N);
}