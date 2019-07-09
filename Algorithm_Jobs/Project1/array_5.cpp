//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int a_data[10], b_data[10];
//int a_win = 0, b_win = 0;
//int main() {
//
//	for (int i = 0; i < 10; i++) {
//		cin >> a_data[i];
//	}
//	for (int i = 0; i < 10; i++) {
//		cin >> b_data[i];
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (a_data[i] == b_data[i]) {
//			continue;
//		}
//
//		if (a_data[i] > b_data[i]) {
//			a_win++;
//			continue;
//		}
//
//		b_win++;
//	}
//
//	if (a_win > b_win) {
//		cout << 'A';
//	}
//	else {
//		if (a_win == b_win) {
//			cout << 'D';
//		}
//		else {
//			cout << 'B';
//		}
//	}
//
//	return 0;
//}