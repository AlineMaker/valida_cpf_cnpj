#include <stdio.h>
#include <string.h>

size_t strlen(char *s)
{
    int i;
    i = 0;
    if(*s != NULL)
    { 
        
        while(*s !='\0')
        { 
            s++;
            i++;
        }
    }
    return(i);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf(strlen("cada"));
        printf(" ok\n");
        return(0);
    } 
    else
        printf("error\n");
        return(1);
}