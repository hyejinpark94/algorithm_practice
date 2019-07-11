//#include<iostream>
//#include<cstdio>
//#include<limits.h>
//
//using namespace std;
//
//int arr[1000][3];
//int dice[7] = { 0, };
//int p, tmp_ret = 0,ret = INT_MIN;
//int max_dice = INT_MIN;
//int main() {
//
//	cin >> p;
//	for (int i = 0; i < p; i++) {
//		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//		for (int j = 0; j < 3; j++) {
//			dice[arr[i][j]]++; //주사위 각 개수++
//		}
//
//		max_dice = INT_MIN;
//		tmp_ret = 0;
//		for (int i = 1; i <= 6; i++) {
//			if (dice[i] == 0) { //볼 필요없으니까 continue
//				continue;
//			}
//
//			if (dice[i] == 3) {   //이건 하자마자 초기화 할 수 있고
//				tmp_ret = 10000 + i * 1000;
//				dice[i] = 0; //초기화 추가
//				break;
//			}
//			else if (dice[i] == 2) {  //이건 1하나가 더 초기화되야돼 여기서 초기화해도!
//				tmp_ret = 1000 + i * 100;
//				dice[i] = 0; //초기화 추가
//				//break;  //나머지 1 하나 있는거 초기화 해야되니까 break 취소
//			}
//			else if(dice[i] == 1) {
//				//초기화 추가11
//				if (tmp_ret != 0) {
//					dice[i] = 0;
//					break;
//				}
//
//				if (i > max_dice) {
//					max_dice = i;
//				}
//			}
//		}
//		if (tmp_ret == 0) { //중복되는게 없을때 1일때
//			tmp_ret = max_dice * 100;
//		}
//
//		//dice  배열을 꼭 이렇게만 초기화해야하는가...
//		for (int i = 1; i <= 6; i++) {
//			dice[i] = 0;
//		}
//
//		//최대값을 구하기 위한 과정
//		if (tmp_ret != 0) {
//			if (tmp_ret > ret) {
//				ret = tmp_ret;
//			}
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}