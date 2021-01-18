#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main()
{
    long id, N, K;
    cin >> id >> N >> K;
    string S[N];
    long MAX = 10000;
    long color_count = 0;
    long touch_count = 0;
    long max_count = 0;
    long color = 1;

    for(int i=0; i < N; i++) {
        cin >> S[i];
    }

    for(int i=1; i <= K; i++) {
        for(int j=0; j<N; j++) {
            color_count = 0;
            for (char& c : S[j]) {
                if (ctoi(c) == i) {
                    color_count++;
                }
            }
        }
        if (max_count < color_count) {
            max_count = color_count;
            color = i;
        }
    }
    

    if (N * N <= MAX) {
        cout << N * N << endl;
    } else {
        cout << MAX << endl;
    }

    for (int i=1; i <= N; i=i++) {
        for (int j=1; j <= N; j=j++) {
            if (touch_count < MAX) {
                cout << to_string(i) + " "<< to_string(j) + " " << color << endl;
                touch_count++;
            }
        }
    }
}