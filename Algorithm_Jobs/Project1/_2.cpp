#include<iostream>
#include<cstdio>

using namespace std;

int map[5][5];
char out_map[5][5];
int dx[4] = { +1, 0, -1, 0 };
int dy[4] = { 0, +1, 0, -1 };

int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &map[i][j]);
			out_map[i][j] = map[i][j] + '0';
		}
	}

	int nx, ny;
	bool isSmall = true;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			isSmall = true;
			for (int k = 0; k < 4; k++) {
				nx = j + dx[k];
				ny = i + dy[k];
				if (nx >= 0 && nx < 5 &&
					ny >= 0 && ny < 5) {
					if (map[ny][nx] < map[i][j]) {  //상하좌우에 있는게 
						isSmall = false;
						break;
					}
				}
			}

			if (isSmall && map[i][j] != 0) {  // 0인경우는 제외
				out_map[i][j] = '*';
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << out_map[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}