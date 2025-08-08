char *strnstr(const char *hay, const char *needle, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	if(needle[i] == '\0')
		return (char *)hay;
	while(i < n && hay[i] != '\0')
	{
		while(((i + j) < n) && (hay[i + j] == needle[j]))
		{
			if(needle[j + 1] == '\0')
				return (char *)hay + i;
			j++;
		}
	i++;
	j = 0;
	}
	return 	NULL;	
}
