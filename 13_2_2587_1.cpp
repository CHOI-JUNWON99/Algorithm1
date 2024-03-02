#include <iostream>
#include <algorithm>

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

    // 중앙값을 위해 배열을 정렬
    sort(arr, arr + 5);
    int mid = arr[2]; // 정렬된 배열에서 중앙값은 인덱스 2의 값

    cout << mid;

    return 0;
}