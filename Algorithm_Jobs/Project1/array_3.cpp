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
//	//9�� ���� �Է¹ޱ�
//	for (int i = 0; i < 9; i++) {
//		cin >> num[i];
//	}
//
//	int tmp;
//	//�ִ밪 �� idx ã��
//	for (int i = 0; i < 2; i++) {
//		//�ʱ� �ִ밪 �� idx ����
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