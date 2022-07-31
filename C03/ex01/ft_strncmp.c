#include<unistd.h>
#include<stdio.h>
int ft_strncmp(char *s1, char *s2)
{       
        unsigned int n;
        n = 0;
        if ((s1[n] != '\0') && (s2[n] != '\0') && (s1[n] == s2[n]))
        {
            n++;
        }
return (s1[n] - s2[n]);
}

int main(void)
{
    printf("%d\n", ft_strncmp("amanha", "anoitecer"));
    printf("%d\n", ft_strncmp("sol", "sol"));
return (0);
}


