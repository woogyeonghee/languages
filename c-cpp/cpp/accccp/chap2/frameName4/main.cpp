#include <iostream>
#include <string>
// pg 66
int main()
{
    std::cout << "input your name : ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "hello, " + name + "!";

    const int pad = 3;          // 1칸

    const int rows = 2 * pad + 3;
    const std::string::size_type cols = greeting.size() + 2 * pad + 2;

    for (int r = 0; r != rows; ++r) {
        std::string line;

        if (r == 0 || r == rows - 1) {
            // "*****************"
            line = std::string(cols, '*');
        } else if (r != rows / 2) {
            // "*               *"
            line = "*" + std::string(greeting.size() + pad * 2, ' ') + "*";
        } else {
            line = "*" + std::string(pad, ' ') + greeting + std::string(pad, ' ') + "*";
        }

        std::cout << line << std::endl;
    }
    return 0;
}
