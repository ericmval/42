#include <stdio.h>
#include <strings.h>
#include <string.h>


int ft_strlen(char *a)
{
    int i;
    i = 0;
    while ( a[i] != '\0')
        i++;
    return (i);
}

/* ft_memset  cambia espacios de memoria de un puntero al caracter que le digamos
mientras no sobrepase de 256. tiene peligro de desbordamineto. y el return devuleve
la direccion de memoria*/
void *ft_memset(void *s, int c,size_t n)
{
    size_t i;
    i = 0;
    unsigned char *mid;
    mid = (unsigned char*)s;
    if (n == 0)
        return (mid);
    if (c >= 256)
        c = c % 256;
    while (i < n )
    {
        mid[i] = c;
        i++;
    }
    return (mid);
}

void ft_bzero(void *s, int n)
{
    int i;
    char *mid;

    i = 0;
    mid = (char*)s;
    while (i < n -1)
        {
            mid[i] = '\0';
            i++;
        }
}
/*para moverse en las posiciones del array hay qye transformarlo a char
ya que siendo void la entrada no tiene tipo definido.
Retorna la direccon de memoria de dest*/
void *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t  i;
    unsigned char *mid;
    unsigned char *ent;
    mid = (unsigned char*)dest;
    ent = (unsigned char*)src;


    i = 0;
    while (i < n )
    {
        mid[i] = ent[i];
        i++;
    }
    return (dest);
}



//test de ft_memcpy
int main (void)
{
    char ini[10] = "espinacas";
    char end[5] = "cono";
    int i = 0;
    end[20] = 'x';
    ini [21] = 'e';

    printf("el return es: %p\n",ft_memcpy(end,ini,12));
    printf("end ahora es %s\n",end);
    while (i < 25)
    {
        printf("%c,",end[i]);
        i++;
    }
    return(0);
}

/*
//test ft_bzero
int main(void)
{
    char test[10] ="pesado";
    int i;
    int  numtest = 0;
    ft_bzero(test,numtest);
    for ( i = 0; i < numtest+2; i++ ){
        printf("%c",test[i]);
    }
    return (0);
}
*/
/*
//test de ft_memset
int main(void)
{
    char test[10] ="pesado";
     char test2[10] = "pesado";
    printf("el return original es %p \n",memset(test,350001, 20));
    printf("el return ft es %p \n",ft_memset(test2,350001, 20));
    test[9] = '\0';
    test2[9] = '\0';
    printf("test  ahora es igual a %s \n",test);
    printf("test2 ahora es igual a %s \n",test2);
    return (0);
}
*/
/*
//test ft_strlen
int main (void)
{
    char test[100] ="trinaranjus";
    printf("original de %s da: %d\n",test,strlen(test));
    printf("ft  vers de %s da: %d\n",test,ft_strlen(test));
    return (0);
}
*/