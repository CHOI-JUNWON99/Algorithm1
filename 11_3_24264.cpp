#include <iostream>

using namespace std;

int main() {
    //int n; 주의해야할 점은 n의 자료형이다
    //n의 크기를 고려해 longlong으로 설정해주었다.
    long long n;
    cin >> n;
    cout << (n * n) << endl << 2;
}
//O(n^2) 시간복잡도
//n의 크기 5*10^5

/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
*/