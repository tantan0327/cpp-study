#include <fstream>
#include <iostream>

int main()
{
    const char message[] = "Hello World!";
    std::ofstream out{"hello_binary.bin", std::ios::binary};

    out.write(message, sizeof(message));
    out.close();

    std::ifstream in{"hello_binary.bin", std::ios::binary};

    char buffer[1024] = {};
    in.read(buffer, sizeof(buffer));

    for (auto remain = in.gcount(); remain--;)
    {
        if (message[remain] != buffer[remain])
        {
            std::cout << "not matched!!" << std::endl;
            break;
        }
    }

    std::cout << "finished!" <<std::endl;
}