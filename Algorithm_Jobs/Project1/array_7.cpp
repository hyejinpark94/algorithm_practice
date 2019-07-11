//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int num, num_b;
//int idx = 0;
//int arr[10] = { 0 };
//int main() {
//
//	cin >> num;
//	while (num >= 1) {
//		num_b = num % 2; //나머지
//		num = num / 2; //몫
//		arr[idx++] = num_b;  //후위++이니까 마지막에 1 더해질거 추측해서
//	}
//
//	int start_p = 0;
//	for (int i = idx; i >= 0; i--) { //여기서 idx-1 부터 시작해도되고!
//		cout << arr[i];
//	}
//
//	return 0;
//}