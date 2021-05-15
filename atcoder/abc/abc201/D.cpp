#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

	char A[H][W];

	int takahashi = 0;
	int aoki = 0;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> A[i][j];
		}
	}

	int i = 0;
	int j = 0;

	int s = 0;
	int tate_s = 0;
	int yoko_s = 0;

	while (true) {


		if (i == H - 1) {
			j++;
			// 終了条件
			if (j == W - 1) break;

			if (i + j % 2 != 0) {
				if (A[i][j] == '+') {
					takahashi++;
				} else {
					takahashi--;
				}
			} else {
				if (A[i][j] == '+') {
					aoki++;
				} else {
					aoki--;
				}
			}
		}


		if (j == W - 1) {
			i++;
			// 終了条件
			if (i == H - 1) break;

			if (i + j % 2 != 0) {
				if (A[i][j] == '+') {
					takahashi++;
				} else {
					takahashi--;
				}
			} else {
				if (A[i][j] == '+') {
					aoki++;
				} else {
					aoki--;
				}
			}
		}

		s = 0;
		// takahashi
		// 現在地の右下の期待される点数を調べる
		// for (int k = i+1; k < H; k++) {
		// 	for (int l = j+1; l < W; l++) {
		// 		if (i + j % 2 != 0) {
		// 			if (A[k][l] == '+') {
		// 				s++;
		// 			}
		// 		} else {
		// 			if (A[k][l] == '-') {
		// 				s++;
		// 			}
		// 		}
		// 	}
		// }

		int tate_s = 0;
		int yoko_s = 0;
		if (i + j % 2 != 0) {
			for (int k = i + 1; i < H; i++) {
				if (i + j % 2 != 0) {
					if (A[k][j] == '+') {
						tate_s++;
					}
				} else {
					if (A[k][j] == '-') {
						tate_s++;
					}
				}
			}

			for (int k = i + 1; i < W; i++) {
				if (i + j % 2 != 0) {
					if (A[i][k] == '+') {
						yoko_s++;
					}
				} else {
					if (A[i][k] == '-') {
						yoko_s++;
					}
				}
			}
			if (tate_s > yoko_s) {
				i++;
			} else {
				j++;
			}

		} else {
			for (int k = i + 1; i < H; i++) {
			if (i + j % 2 != 0) {
				if (A[k][j] == '-') {
					tate_s++;
				}
			} else {
				if (A[k][j] == '+') {
					tate_s++;
				}
			}
			}

			for (int k = i + 1; i < W; i++) {
				if (i + j % 2 != 0) {
					if (A[i][k] == '-') {
						yoko_s++;
					}
				} else {
					if (A[i][k] == '+) {
						yoko_s++;
					}
				}
			}
			if (tate_s > yoko_s) {
				i++;
			} else {
				j++;
			}
		}
		

	}

	if (takahashi == aoki) {
		cout << "Draw" << endl;
	} else if (takahashi > aoki) {
		cout << "Takahashi" << endl;
	} else {
		cout << "Aoki" << endl;
	}
	
}