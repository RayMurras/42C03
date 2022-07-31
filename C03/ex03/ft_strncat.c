#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{       
        unsigned int    n;
        unsigned int    m;
        
        m = 0;
        n = 0;
        while (dest[m] != '\0')
        {
            m++;
        }
        while (n < nb && src[n] != '\0')
        {
            dest[m + n] = src[n];
            n++;
        }
        dest[m + n] ='\0';
        return (dest);
}

int main(void)
{
    char src[] = "voce";
    char dest[] = " amo ";
    
	printf("%s", ft_strncat(dest, src, 4));
    
return (0);
}
