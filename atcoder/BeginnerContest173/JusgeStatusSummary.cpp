#include <iostream>
#include <string>

int main()
{
    // input
    int N;
    std::cin >> N;
    std::string s[N];
   


    int ac_count = 0;
    int wa_count = 0;
    int tle_count = 0;
    int re_count = 0;

    for(int i = 0; i < N; i++) {
        std::cin >> s[i];
    }

    for (std::string word : s) {
        if (word == "AC") {
            ac_count++;
            continue;
        }
        if (word == "WA") {
            wa_count++;
            continue;
        }
        if (word == "TLE") {
            tle_count++;
            continue;
        }
        if (word == "RE") {
            re_count++;
            continue;
        }
    }

    std::cout << "AC x " << ac_count << std::endl;
    std::cout << "WA x " << wa_count << std::endl;
    std::cout << "TLE x " << tle_count << std::endl;
    std::cout << "RE x " << re_count << std::endl;

}