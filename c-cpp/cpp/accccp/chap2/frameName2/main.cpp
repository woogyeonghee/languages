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
    //const int cols = greeting.size() + 2 * pad + 2;     // * greeting *
    const std::string::size_type cols = greeting.size() + 2 * pad + 2;      // string 클래스 안에서 정의 되었으며 unsigned int 형으로 되어있다.

    for (int r = 0; r != rows; ++r) {
        std::string::size_type c = 0;

        while(c != cols) {          // c가 cols가 아니면 계속 문자 출력
            if (r == pad + 1 && c == pad + 1) {
                // print greeting
                std::cout << greeting;
                //c = c + greeting.size();
                c += greeting.size();
            } else {
                // print "*" or " "
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                        std::cout << "*";
                else
                        std::cout << " ";
                ++c;
            }

        }
        std::cout << std::endl;
    }
    return 0;
}
