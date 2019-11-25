# include<stdio.h>
int bitcount(unsigned long long int x);
int main (void)
{
    unsigned long long int m, n, p;
    m = 0;
    n = ~m;
    p = n + 1;
    printf(" unsigned long long int is size of %d bit .",bitcount(1));
    printf("The max is %llu\n", n);
    printf(", the min is %llu", p);
    return 0;
}
    int bitcount (unsigned long long int x)
   {
       int b ;
       for (b = 0; x != 0; x <<= 1)
       b++;
       return b;
    }
