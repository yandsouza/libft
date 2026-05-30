/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:13:28 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/23 15:02:42 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;
	size_t	len;

	len = ft_strlen(s);
	map = malloc(len * sizeof(char) + 1);
	if (!map)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		map[i] = (f)(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
//char	mapi(unsigned int i, char c)
//{
//	static int indexArray[11] = {0};
//
//	if (i > 10 || indexArray[i] == 1)
//		write(1, "wrong index\n", 12);
//	else
//		indexArray[i] = 1;
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	else if (c >= 'A' && c <= 'Z')
//		return (c + 32);
//	else
//		return (c);
//}
//#include <stdio.h>
//int	main(void)
//{
//	char	*str = "LoReM iPsUm";
//	printf("%s\n", ft_strmapi(str, &mapi));
//}
