#include <stdio.h>

int	ft_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '+'
		|| c == '\r' || c == '\t' || c == '\f' || c == '-')
		return (1);
	else
		return (0);
}

int	is_negative(char *str)
{
	int	negative;
	int	i;

	i = 0;
	negative = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	if (negative % 2 == 1)
		return (1);
	else
		return (0);
}

int	numerice(char *digi)
{
	int	mult;
	int	salida;
	int	i;
	int	suma;

	salida = 0;
	mult = 1;
	i = 0;
	suma = 0;
	while (digi[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		salida = digi[i - 1] - '0';
		suma = suma + (salida * mult);
		i--;
		mult = mult * 10;
		salida = 0;
	}
	return (suma);
}

int	ft_position(char *str , char *exit)
{
	int		i;
	int		i2;

	i2 = 0;
	i = 0;
	while (str[i])
	{
		if (ft_space(str[i]))
			i++;
		else if (str[i] < '0' || str[i] > '9')
            return(1);
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		exit[i2] = str[i];
		i++;
		i2++;
	}
	exit[i2] = '\0';
	printf(" en la salida de position es : %s \n",exit);
	return (0);
}

int	ft_atoi(char *str)
{
	char str2[20];
	int salida;

	salida = 0;

	ft_position(str, str2);
	printf ("sa lasida de  position es : %s \n",str2);
	salida = numerice(str2);
    if (is_negative(str))
        salida = -salida;
    return (salida);
}

int	main(void)
{
	char	entrada[] ="--+-+43)859";
	printf("el char es : %s \n", entrada);
	printf("el entero es %d \n", ft_atoi(entrada));
	return(0);
}
