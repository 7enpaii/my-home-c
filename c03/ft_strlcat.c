int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	i = -1;
	while (++i < size && *dest)
		dest++;
	if (i == size)
		return (i + (unsigned int) ft_strlen(src));
	b = -1;
	while (src[++b])
		if (b < size - i - 1)
			*dest++ = src[b];
	*dest = '\0';
	return (i + b);
}
