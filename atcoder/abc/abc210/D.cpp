#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

using ll = long long;
using namespace std;



int main()
{
    int H, W, C;
	cin >> H >> W >> C;

    int A[H][W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
	}

    ll min_cost = 1000000001;

    ll cost = 0;

    ll city_cost_min = 1000000001;
    ll city_cost = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int k = 0; k < H; k++) {
                for (int l = 0; l < W; l++) {
                    city_cost = 0;
                    if (A[i][j] == A[k][l]) {
                        continue;
                    }
                    city_cost += A[i][j];
                    city_cost += A[k][l];
                    if (city_cost <= city_cost_min) {
                        city_cost_min = city_cost;
                    }
                    cost = 0;
                    cost += city_cost + C * (abs(i - k) + abs(j - l));
                    if (min_cost > cost) {
                        min_cost = cost;
                    }
                }
            }
        }
	}

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int k = 0; k < H; k++) {
                for (int l = 0; l < W; l++) {
                    city_cost = 0;
                    if (A[i][j] == A[k][l]) {
                        continue;
                    }
                    city_cost += A[i][j];
                    city_cost += A[k][l];
                    if (city_cost <= city_cost_min) {
                        city_cost_min = city_cost;
                    }
                    cost = 0;
                    cost += city_cost + C * (abs(i - k) + abs(j - l));
                    if (min_cost > cost) {
                        min_cost = cost;
                    }
                }
            }
        }
	}

    // TODO: 隣接のコスト計算

    cout <<min_cost << endl;

}