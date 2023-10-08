#include "ft_printf.h"

int main (void)
{
	int original;
	int ft;
	int test1= 680;
	char test2[] = "campeon del mundo entero";
//	char test3[] = NULL;

	ft = ft_printf("%s  \n", (char *)NULL);
//	original = printf("%p %s bienestest \n", test1,test2);
//	original = printf("%s", test3);
//	printf("el original es:%d\n", original);
	printf("el ft es:%d\n", ft);

	return (0);
}
