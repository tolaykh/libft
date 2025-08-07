void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char 	*ptr;
	ptr = (const unsigned char *)s;
	while(n)
	{
		if(*ptr ==(unsigned char)c)
			return ptr;
		ptr++;
		n--;
	}
	return NULL;
}
