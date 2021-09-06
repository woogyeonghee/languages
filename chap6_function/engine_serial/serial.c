
int getSerialNumber(void)
{
	static int number = 0;

	return ++number;
}

