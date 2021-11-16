#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// ----+-+123hel65
// >> -123

char	get_first_digits(char *str);

int str_len(char *str);

char	compare_symbols(char *str)
{
	char sym;

	while (*str)
	{
		if (sym == '-' && *str == '-')
			sym = '+';
		else if ((sym == '+' && *str == '-') || (sym == '-' && *str == '+'))
			sym = '-';
		else
			sym = *str;
		str++;
	}
	return (sym);
}



long int	convert_char_to_digit(char *str_numbers)
{
	long int result;

	result = 0;
	while (*str_numbers)
	{
		result = (result * 10) + 10 - (58 - (int)*str_numbers);
		str_numbers++;
	}
	return result;
}


int	ft_atoi(char *str);





int main(void)
{

	char	str[] = "23";
	//printf("%d", convert_char_to_digit(str));

	char	str2[] = "--";
	printf("%c", compare_symbols(str2));
	//int n = atoi(str) + 5;
	//printf("%d", n);
}
