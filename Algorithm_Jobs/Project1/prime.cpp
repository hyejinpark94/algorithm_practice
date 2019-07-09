//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = n; i <= m; i++) {
//
//		if (i == 1) { //예외처리(문제상황예측?)
//			continue;
//		}
//
//		bool isPrime = true;
//		for (int j = 2; j <= i-1; j++) {
//			if (i % j == 0) {
//				isPrime = false;
//				break;
//			}
//		}
//		if (isPrime) {
//			cout << i << " ";
//		}
//	}
//	return 0;
//}