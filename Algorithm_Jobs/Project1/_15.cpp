//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int num[10];
//int cnt[10];
//int main() {
//
//	for (int i = 0; i < 10; i++) {
//		cin >> num[i];
//		for (int j = 0; j <= i; j++) {
//			if (num[j] == num[i]) {
//				cnt[i]++;
//			}
//		}
//	}
//
//	//Æò±Õ
//	int sum = 0;
//	int avg = 0;
//	for (int i = 0; i < 10; i++) {
//		sum += num[i];
//	}
//	avg = sum / 10;
//
//	//ÃÖºó°ª
//	int max = INT_MIN;
//	int max_idx = 0;
//	for (int i = 0; i < 10; i++) {
//		if (cnt[i] > max) {
//			max = cnt[i];
//			max_idx = i;
//		}
//	}
//	
//	cout << avg << "\n" << num[max_idx];
//
//	return 0;
//}