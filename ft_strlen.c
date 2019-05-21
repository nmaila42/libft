#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t  i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int		main(void)
{
	char str[] = "portrait";
	char ptr;

	ptr = ft_strlen(str);
	printf("%d", ptr);
	return (0);
}
