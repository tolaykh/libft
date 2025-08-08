size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t slen;

	slen = ft_strlen(src);
	if(dstsize == 0)
		return (slen);
	while(src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
