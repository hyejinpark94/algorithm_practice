//#include<iostream>
//#include<cstdio>
//#include<limits.h>
//
//using namespace std;
//
//int num[9];
//int min_val, min_idx;
//int main() {
//
//	//9개 숫자 입력받기
//	for (int i = 0; i < 9; i++) {
//		cin >> num[i];
//	}
//
//	int tmp;
//	//최대값 및 idx 찾기
//	for (int i = 0; i < 2; i++) {
//		//초기 최대값 및 idx 지정
//		min_val = INT_MAX;
//		min_idx = 0;
//		for (int j = i; j < 9; j++) {
//			if (num[j] < min_val) {
//				min_val = num[j];
//				min_idx = j;
//			}
//		}
//
//		tmp = num[i];
//		num[i] = num[min_idx];
//		num[min_idx] = tmp;
//	}
//
//	cout << min_val << "\n" << min_idx+1;
//
//	return 0;
//}