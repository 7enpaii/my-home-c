#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void print(char c)
{
    write(1, &c, 1);
}

int len(char *str)
{
    int n;

    n = 0;
    while (str[n])
        n++;
    return (n);
}

char    *ssplit(char *str, char *sep)
{
    char *tab;
    int start;
    int end;
    int sep_checked_len;
    int sep_len;
    int i;
    int j;

    i = -1;
    start = 0;
    sep_len = len(sep);
    sep_checked_len = 0;
    while (str[++i])
    {
        j = -1;
        int k = i;
        while (sep[++j] == str[k])
        {
            sep_checked_len++;
            k++;
        }
        if (sep_checked_len == sep_len)
        {
            end = k - sep_len;
            while (start < end)
            {
                print(str[start++]);
            }
            print('\n');
            start = k;
            //printf("start == %d", start);
        }
        sep_checked_len = 0;
    }
}

int main(void)
{
    char *str = "i, make, this, choose";
    char *sep = ", ";
    char *words = ssplit(str, sep);
}
