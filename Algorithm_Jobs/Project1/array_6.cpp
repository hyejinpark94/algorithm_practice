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
//			dice[arr[i][j]]++; //�ֻ��� �� ����++
//		}
//
//		max_dice = INT_MIN;
//		tmp_ret = 0;
//		for (int i = 1; i <= 6; i++) {
//			if (dice[i] == 0) { //�� �ʿ�����ϱ� continue
//				continue;
//			}
//
//			if (dice[i] == 3) {   //�̰� ���ڸ��� �ʱ�ȭ �� �� �ְ�
//				tmp_ret = 10000 + i * 1000;
//				dice[i] = 0; //�ʱ�ȭ �߰�
//				break;
//			}
//			else if (dice[i] == 2) {  //�̰� 1�ϳ��� �� �ʱ�ȭ�Ǿߵ� ���⼭ �ʱ�ȭ�ص�!
//				tmp_ret = 1000 + i * 100;
//				dice[i] = 0; //�ʱ�ȭ �߰�
//				//break;  //������ 1 �ϳ� �ִ°� �ʱ�ȭ �ؾߵǴϱ� break ���
//			}
//			else if(dice[i] == 1) {
//				//�ʱ�ȭ �߰�11
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
//		if (tmp_ret == 0) { //�ߺ��Ǵ°� ������ 1�϶�
//			tmp_ret = max_dice * 100;
//		}
//
//		//dice  �迭�� �� �̷��Ը� �ʱ�ȭ�ؾ��ϴ°�...
//		for (int i = 1; i <= 6; i++) {
//			dice[i] = 0;
//		}
//
//		//�ִ밪�� ���ϱ� ���� ����
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