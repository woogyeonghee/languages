#include <stdio.h>

#define BOLD	(0x01 << 0)
#define ITALIC	(0x01 << 1)
#define SHADOW	(0x01 << 2)
#define UL		(0x01 << 3)
 
int main(void)
{
	unsigned char attr;
	
	attr = attr ^ attr;
	attr = attr | BOLD;
	attr = attr | (SHADOW + ITALIC);
	//attr = attr ^ (BOLD);
	attr = attr & (~BOLD);


	printf("attr: 0x%02x\n",attr);
	return 0;
}
