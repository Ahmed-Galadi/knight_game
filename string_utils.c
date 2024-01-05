#include "fractol.h"

int ft_strncmp(char *str1, char *str2, int n)
{
	int		i;

	i = 0;
	if (str1 == NULL || str2 == NULL || n <= 0)
		return (0);
	while(*str1 && n > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void putstr_fd(char *str, int fd)
{
	if (str != NULL && fd >= 0)
	{
		while (*str)
			write(fd, str++, 1);
	}
}
