//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//bool map[11][11] = { false };
//bool checked[11][11] = { false };
//int n;
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			scanf_s("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		//행
//		for (int j = 1; j <= 10; j++) {
//			map[i][j] = !map[i][j];
//			checked[i][j] = true;
//		}
//
//		//열
//		for (int j = 1; j <= 10; j++) {
//			if (!checked[j][i]) {
//				map[j][i] = !map[j][i];
//			}
//			checked[i][j] = false; //체크한거 초기화!!!
//		}
//	}
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}