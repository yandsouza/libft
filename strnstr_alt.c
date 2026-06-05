char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	int		is_equal;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		is_equal = ft_strncmp((char *)&big[i], little, little_len);
		if (i + little_len <= len && is_equal == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
