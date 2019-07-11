//#include<iostream>
//#include<cstdio>
//#include<limits.h>
//#include<algorithm>
//
//using namespace std;
//
//int n, k, tmp_num;
//int num[100000];
//int max_val;
//int max_idx;
//int main() {
//
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//
//	for (int i = 0; i < k; i++) {
//		max_val = num[i];
//		max_idx = i;
//		for (int j = i; j < n; j++) {
//			max_val = max(max_val, num[j]);
//			//max_idx = j;
//			if (max_val == num[j]) {
//				max_idx = j;
//			}
//		}
//
//		tmp_num = num[i];
//		num[i] = num[max_idx];
//		num[max_idx] = tmp_num;
//	}
//
//	cout << max_val;
//	return 0;
//}