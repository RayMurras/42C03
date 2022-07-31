#include<stdio.h>

char *ft_strstr(char *str, char *to_find)
{       
        int    n;
        int    m;
        
        m = 0;
        n = 0;
        if (to_find[m] == '\0')
        {
            return(str);
        }
        while (str[n] != '\0')
        {
            while (str[n + m] == to_find[m] && str[n+m] != '\0')
            {
                m++;
                if (to_find[m] == '\0')
                {
                    return(str + n);
                }
                n++;
                m = 0;
            }         
        }
        return (0);
}

int main(void)
{
    char str[] = "For the glory";
    char to_find[] = "glory";
    
	printf("%s", ft_strstr(str, to_find));
    
return (0);
}