#include <iostream>
#include <string>

int main()
{
    // input
    int H, W, K;
    std::cin >> H >> W >> K;
    char s[H][W];
    int sharp_count = 0;
    int result = 0;

    int row_sharp_count[H];
    int column_sharp_count[W];


    for (int i = 0 ; i < W; i++) {
        for (int j = 0; j < H; j++) {
            std::cin >> s[j][i];
            if (s[j][i] == '#') {
                row_sharp_count[j]++; 
                column_sharp_count[i]++;
            }
        }
    }

    for (int i = 0 ; i < W; i++) {
        for (int j = 0; j < H; j++) {
            if (s[j][i] == '#') {
                sharp_count++;
            }
        }
    }

    if (sharp_count > K) {
        std::cout << 0 << std::endl;
        return 0;
    }

    if (sharp_count = K) {
        std::cout << 1 << std::endl;
        return 0;
    }

}