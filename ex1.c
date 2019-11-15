#include <stdio.h>
#define MAXLINE 50
int main(void)
{
    int p = 0;
    int q = 0;
    int m = 0;
    char s[MAXLINE];
    while ((s[m] = getchar()) != EOF)
    {
        if (s[m] == '\n')
        {
            break;
        }
        m++;
    }
    for(m = 0; s[m] != '\n'; m++){
        if(s[m] == '0'){
            q++;
        }
    }
    for(m = 0; s[m] != '\n'; m++){
        if(s[m] == 'a' || s[m] == 'A'){
            p++;
        }
    }
    printf("The number of a is : %d\n", p);
    printf("The number of 0 is : %d\n", q);
}
