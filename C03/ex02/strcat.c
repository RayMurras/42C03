#include<unistd.h>
#include<stdio.h>
char *ft_strcat(char *dest, char *src)
{       
        int    n;
        int    m;
        
        while (dest[m] != '\0')
        {
            m++;
        }
        while (src[n] != '\0')
        {
            dest[m] = src[n];
            m++;
            n++;
        }
        dest[m] ='\0';
        return (dest);
}

int main(void)
{
    char src[] = "voce";
    char dest[9] = " amo ";
    
    printf("\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s", dest);
    
return (0);
}

