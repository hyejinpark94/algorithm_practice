//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//
//int cls[10] = { 0 }; //1�ݺ��� ����
//int dup_cls;
//int stu[1001];
//int map[1001][6]; //5�г�����ϱ� 1�г����
//int stu_num;
//int main() {
//
//	cin >> stu_num;
//	for (int i = 1; i <= 5; i++) {  //�г⺰
//		for (int j = 0; j < stu_num; j++) {
//			cls[map[j][i]]++;
//		}
//
//		for (int c = 1; c <= 9; c++) {
//			if (c != 1) {
//				for (int j = 0; j < stu_num; j++) {
//					if (map[j][i] == c) {
//						stu[j]++;
//					}
//				}
//			}
//		}
//	}
//
//	int max_val = stu[0];
//	for (int i = 0; i < stu_num; i++) {
//		max_val = max(max_val, stu[i]);
//	}
//
//
//	return 0;
//}