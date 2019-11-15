#include <stdio.h>
int main(void)
{
    char X[9];
    char Y[9];
    char a;
    int i, q;
    float k;
    float n = 0;
    float m = 0;
    for (i = 0; i < 10; i = i + 1)
    {
        X[i] = getchar();
        if (X[i] == ' ')
        {
            break;
        }
        n = n * 10 + (X[i] - '0');
    }
    if (X[i] == ' ')
    {
        for (q = 0; q < 10; q = q + 1)
        {
            Y[q] = getchar();
            if (Y[q] == ' ')
            {
                break;
            }
            m = m * 10 + (Y[q] - '0');
        }
        if (Y[q] == ' ')
        {
            a = getchar();
            if (a == '+')
            {
                k = m + n;
            }
            else if (a == '-')
            {
                k = n - m;
            }
            else if (a == '*')
            {
                k = n * m;
            }
            else if (a == '/')
            {
                k = n / m;
            }
        }
        printf("The expression has a value of: %.1f", k);
    }
}
