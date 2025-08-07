char	*strrchr(const char *s, int c)
{
	char	ch;
	const char	*start;

	start = s;
	ch = (char)c;
	while (*s)
	{
		s++;
	}

	if ((unsigned char)c == '\0')
        	return (char *)s;

	while (s >= start)
	{
		if ((unsigned char)*s == (unsigned char)ch)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
