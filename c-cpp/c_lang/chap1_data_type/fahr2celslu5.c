#include <stdio.h>

int main(void)
{
	int fahr=31;
	int celsius;
	int celsius0;
	int celsius2;
	int pp;
	pp = 5 * (fahr - 32)*100;
	celsius0 = 5 * (fahr - 32)/9;
	if (fahr >=32) {
		celsius = pp / 9 - celsius0 * 100;
		celsius2 = pp % 9;
		if (celsius2 >= 5)
			celsius++;
		printf("%d.%d", celsius0,celsius);
	}
	else if (fahr = 31) {
		pp = -pp;
		celsius = pp / 9 + celsius0 * 100;
		celsius2 = pp % 9;
		if (celsius2 >= 5)
			celsius++;
		printf("-%d.%d", celsius0,celsius);
	}

	else {
		pp = -pp;
		celsius = pp / 9 + celsius0 * 100;
		celsius2 = pp % 9;
		if (celsius2 >= 5)
			celsius++;
		printf("%d.%d", celsius0,celsius);

	}
	return 0;
}
