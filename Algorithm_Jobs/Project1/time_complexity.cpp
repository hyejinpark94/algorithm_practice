//#include<iostream>
//#include<cstdio>
//#include<limits.h>
//
//using namespace std;
//
//int n, k, tmp_num;
//int num[100000];
//int max = INT_MIN;
//int max_idx;
//int main() {
//	
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//
//	for (int i = 0; i < k; i++) {
//		max = num[i];
//		max_idx = i;
//		for (int j = i; j < n; j++) {
//			if (num[j] > max) {
//				max = num[j];
//				max_idx = j;
//			}
//		}
//
//		tmp_num = num[i];
//		num[i] = num[max_idx];
//		num[max_idx] = tmp_num;
//	}
//
//	cout << max;
//	return 0;
//}