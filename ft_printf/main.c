#include "libftprintf.h"

int main (void)
{
	int original;
	int ft;
	char test1[] = "paquito el chocolatero";
	char test2[] = "campeon del mundo entero";

	ft = ft_printf("%s %s bienestest \n", test1,test2);
	original = printf("%s %s bienestest \n", test1,test2);
	printf("el original es:%d\n", original);
	printf("el ft es:%d\n", ft);

	return (0);
}
