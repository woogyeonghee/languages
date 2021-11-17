#include <iostream>

int main()
{
    std::string name;
    std::cout<<"input ur name: ";
    std::cin >> name;    //std::cin.operator >> (name) or ::operator >> (std::cin,name)

    std::cout <<"hello, "<<name<< std::endl;
    return 0;
}


