#include <iostream>
#include <fstream>

int main()
{
    // 本ソースコードのファイルを読み込む
    std::ifstream in{__FILE__};
    
    in.seekg(0, std::ios::end);

    std::cout << in.rdstate() << std::endl;
    std::cout << "eof: " << std::boolalpha << bool(in.rdstate() & std::ios::eofbit) << std::endl;
    std::cout << "false: " << std::boolalpha << bool(in.rdstate() & std::ios::failbit) << std::endl;
    std::cout << "bad: " << std::boolalpha << bool(in.rdstate() & std::ios::badbit) << std::endl;
    std::cout << std::endl;

    in.get();

    std::cout << in.rdstate() << std::endl;
    std::cout << "eof: " << std::boolalpha << bool(in.rdstate() & std::ios::eofbit) << std::endl;
    std::cout << "false: " << std::boolalpha << bool(in.rdstate() & std::ios::failbit) << std::endl;
    std::cout << "bad: " << std::boolalpha << bool(in.rdstate() & std::ios::badbit) << std::endl;
    std::cout << std::endl;


}