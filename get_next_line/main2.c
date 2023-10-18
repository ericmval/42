#include "get_next_line.h"

//char *ft_sep(const char *pre,char (*post)[300])
char *ft_sep(const char *pre,char (*post)[300])
{
	ssize_t i;
	char *out;
    char *originalout;

	i = 0;	
	while (pre[i] != '\n' && pre[i])
		i++;
	out = ft_calloc(i +1 ,sizeof(char));
	if(!out)
		return (NULL);
    originalout = out;
	while ( i-- +1 > 0)
	{
		*out = *pre;
		out++;
		pre++;
	}
	i = 0;
	ft_bzero((*post), 300);
	while (*pre)
	{
		(*post)[i] = *pre;
		i++;
		pre++;
	}
	return (originalout);
}	

int main ()
{
    char entrada[300] = "este es un texto \nque se separa";
    char *salida = "salida";
    static char ultimo[300] = "lleno";

    printf("la entrada es :%s\n la salida es :%s\n el intermedio es :%s\n",entrada, salida,ultimo );
    salida =ft_sep(entrada,&ultimo);

    printf("la entrada es :%s\n la salida es :%s\n el intermedio es :%s\n",entrada, salida,ultimo );

    return 0;
}