#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	if(start >= ft_strlen(s))
	{
		char *e = malloc(1);
		if(!e)
			return NULL;
		e[0] = '\0';
		return (e);
	}
	size_t cpy_len = (ft_strlen(s)) - (size_t)start;
	if(cpy_len > len)
		cpy_len = len;
	char *substr = malloc(cpy_len + 1);
	if (!substr)
		return NULL;

	while(i < cpy_len)
	{
	substr[i] = s[(size_t)start + i];
	i++;
	}
	substr[i] = '\0';
	return (substr);
}
