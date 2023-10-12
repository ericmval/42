#include <stdio.h>
#include <unistd.h>

int	ft_printer(char a)
{
	int error;

	error = write(1, &a, 1);

	return (error);
}

int main (void)
{
    int salida;


    salida = ft_printer('\r');
    printf("\nla salida es %d\n", salida);
    return (0);

}