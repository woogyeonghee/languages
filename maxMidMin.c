#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("input number : ");
	scanf("%d %d %d" ,&a,&b,&c);
	//find and print max, mid,min
	int max,mid,min;
	int case_val;	
	case_val=(a>b&&b>c)?1:(a>c&&c>b)?2:(c>a&&a>b)?3:(c>b&&b<a)?4:(b>a&&a<c)?5:6;
	printf("%d",case_val);
	switch (case_val){
 		case 1://a>b>c
			max=a;
			mid=b;
			min=c;
			break;
		case 2://a>b b<c a>c a>c>b
			max=a;
			mid=c;
			min=b;
			break;
		case 3://a>b b<c c<a c>a>b
			max=c;
			mid=a;
			min=b;
			break;
		case 4://c>b>a
			max=c;
			mid=b;
			min=a;
			break;
		case 5://b>a c<b a>c b>a>c
			max=b;
			mid=a;
			min=c;
			break;
		default ://b>a c<b a<c b>c>a
			max=b;
			mid=c;
			min=a;
	}

	
	printf("max : %d, mid : %d, min : %d\n",max,mid,min);
	return 0;
}
