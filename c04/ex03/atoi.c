int	atoi(char *str)
{
	int	negative;
	int	num;

	while (*str >= 9 && *str <= 13 || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')	
			negative = 1 - negative;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + 10 - (58 - (int)*str);
		str++;
	}
	if (negative)
		num *= -1;
	return num;
}
