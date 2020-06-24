#include <iostream>
#include <fstream>

int main()
{
    std::string line;

    std::cout << "< ";
    // コンソールから入力
    std::getline(std::cin, line);

    std::ifstream in{line};

    // ファイルから1行読み込み
    std::getline(in, line);

    std::cout << line <<std::endl;

}