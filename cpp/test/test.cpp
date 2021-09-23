#include <iostream>

int main()
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= i * 2 - 1; ++j) 
			std::cout << "*";
		std::cout << std::endl;
	}
	return 0;
	
	
/*	int a = 0;
	
	if (a !=0 )
	printf("a = 0\n");
	else
		printf("a != 0\n");
*/
}
