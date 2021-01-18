#include <iostream>
#include <cstdlib>  // abs() for integer
 
int main()
{
    long A, V, B, W, T, a_position, b_position;
    std::cin >> A >> V;
    std::cin >> B >> W;
    std::cin >> T;
 
    if (A < B) {
        a_position = A + V * T;
        b_position = B + W * T;
    } else {
        a_position = A - V * T;
        b_position = B - W * T;
    }
    
    if ((A > B && a_position <= b_position) || (A < B && a_position >= b_position)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
