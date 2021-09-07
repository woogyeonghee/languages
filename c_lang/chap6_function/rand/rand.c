static int seed;

void my_srand(int s)//definition
{
	seed=s;
}

int my_rand(void)
{
	seed= seed *1103515245+12345;
	return ((unsigned)(seed/65536)%32768);
}
