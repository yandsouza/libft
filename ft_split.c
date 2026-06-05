/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:54:30 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/03 10:53:48 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_wordcpy(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = ft_wordlen(s, c);
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_fill_arr(char **arr, const char *s, char c, size_t wc)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	while (e < wc)
	{
		while (s[i] && s[i] == c)
			i++;
		arr[e] = ft_wordcpy(s + i, c);
		if (!arr[e])
		{
			while (e--)
				free(arr[e]);
			free(arr);
			return (0);
		}
		i += ft_wordlen(s + i, c);
		e++;
	}
	arr[e] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	wc;

	if (!s)
		return (NULL);
	wc = ft_wordcount(s, c);
	arr = malloc((wc + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!ft_fill_arr(arr, s, c, wc))
		return (NULL);
	return (arr);
}
//#include <stdio.h> 
//int	main(void)
//{
//	char **arr = ft_split("Hello, World!", ' ');
//	printf("%s\n", arr[0]);
//	printf("%s\n", arr[1]);
//	return (0);
//}
