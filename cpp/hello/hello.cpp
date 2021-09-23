#include <iostream>

int main()
{
   std::cout<<"hello,world"<<std::endl;
   operator<<(std::cout,"hello,world").operator<<(std::endl);
   
   //std::cout<<"hello,world\n";
   //std::cout.operator<<("hello,world");
   operator<<(std::cout,"hello,world");

   //std::cout<<<<std::endl;
   std::cout.operator<<(std::endl);
   //operator<<(std::cout,<<std::endl);

   //a.operator+(b)
   //operator+(a,b);

   return 0;
}
