#include <stdlib.h>

#include <stdio.h> // delete after

int len(char *str)
{
    int cnt;

    cnt = 0;
    while (str[cnt])
        cnt++;
    return (cnt);
}

char *get_substr(char *str, int start, int end)
{
    char *substr;
    int i;
    i = 0;
    printf("str == %s\n", str);
    printf("str == %d\n", start);
    printf("str == %d\n", end);
    if (start > 0) start--;
    int strsize = start > end ? start - end : end - start;
    substr = malloc(sizeof(*substr) * strsize);
    while (start < end)
        substr[i++] = str[start++];
    substr[i] = '\0';
    printf("response == %s\n", substr);
    return (substr);
}

char **ft_split(char *str, char *charset)
{
    char    **res;
    int last = 0;
    int i = 0;
    int str_len = len(str);
    int sep_len = len(charset);
    int sep_counter = 0;

    while (i < str_len)
    {
        int find_sep = 0;
        if (str[i] == charset[0] && i + sep_len <= str_len)
        {
            char *substring = get_substr(str, sep_len, i);
            if (substring == charset)
            {
                res[sep_counter++] = get_substr(str, last, i-last);
                last = i + sep_len;
                i += sep_len;
                find_sep = 1;
            }
        }
        if (find_sep == 0) 
            i++;
    }
    res[sep_counter] = get_substr(str, last, i - last);
    return (res);
}

int main(void)
{
    char *string = "hello worl\0";
    char *sep = "l";
    char **tab = ft_split(string, sep);

    //char *substr = get_substr(string, 0, 9);
    printf("tab == %s", tab[0]);
    //printf("tab == %s", substr);
    //for (int i = 0; tab[i]; i++)
        //printf("tab[i] = %s\n", tab[i]);

    return (0);
}





