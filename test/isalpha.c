#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int a)
{
    if (a >= 'a' && a <= 'z' )
        return (2);
    else if (a >= 'A' && a <= 'Z')
        return (1);
    else
        return (0);
}

int ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
        return (1);
    else
        return (0);
}

int ft_isalnum (int a)
{
    if (a >= 'a' && a <= 'z' )
        return (2);
    else if (a >= 'A' && a <= 'Z')
        return (1);
    else if (a >= '0' && a <= '9')
        return (4);
    else 
        return (0);
}

int ft_isascii(int a)
{
    if (a >= 0 && a <= 128)
        return (1);
    else 
        return (0); 
}

int ft_isprint (int a)
{
    if (a >= 32 && a <= 126)
        return (1);
    else
        return (0);
}


/*
//test de ft_isascii
int main (void)
{
    char all[150];
    for (int i = 0; i < 150; i++) {
        all[i] = (char)i;
    }
    for (int i = 0; i <150; i++){
        printf("el original  de %c da %d\n",all[i],isascii(all[i]));
        printf("el mio       de %c da %d\n\n\n",all[i],ft_isascii(all[i]));

    }
    
    return (0);
}
*/

//test de ft_isalnum
/*
int main (void)
{
    char all[128];
    for (int i = 0; i < 128; i++) {
        all[i] = (char)i;
    }
    for (int i = 0; i <128; i++){
        printf("el original  de %c da %d\n",all[i],isalnum(all[i]));
        printf("el mio       de %c da %d\n\n\n",all[i],ft_isalnum(all[i]));

    }
    
    return (0);
}
*/

/*
//test de ft_isdigit
int main (void)
{
    char all[128];
    for (int i = 0; i < 128; i++) {
        all[i] = (char)i;
    }
    for (int i = 0; i <128; i++){
        printf("el original  de %c da %d\n",all[i],isdigit(all[i]));
        printf("el mio       de %c da %d\n\n\n",all[i],ft_isdigit(all[i]));

    }
    
    return (0);
}
*/


/*
//test de ft_isalpha
int main (void){
    char all[128];
    for (int i = 0; i < 128; i++) {
        all[i] = (char)i;
    }
    for (int i = 0; i <128; i++){
        printf("el original  de %c da %d\n",all[i],isalpha(all[i]));
        printf("el mio       de %c da %d\n\n\n",all[i],ft_isalpha(all[i]));

    }
    
    return (0);
}
*/