#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex_char(char c)
{
	char *hex;

	hex = "0123456789abcdef";

	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while(*str)
	{
		if (*str == 127 || *str < ' ')
		{
			ft_putchar('\\');
			ft_puthex_value(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int main(void)
{
	char str[] = "Coucou\ntu vas bien? new z";
	ft_putstr_non_printable(str);
}
