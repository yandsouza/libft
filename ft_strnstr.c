/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:37:21 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/01 16:55:06 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	e;
	size_t	to_find_len;

	if (!len)
		return (0);
	to_find_len = ft_strlen(little);
	if (!to_find_len)
		return ((char *)big);
	i = 0;
	e = 0;
	while (big[i] != '\0' && i < len - 1)
	{	
		if (big[i] != little[e] && e > 0)
			break ;
		if (big[i] == little[e])
			e++;
		if (e == to_find_len && big[i] != little[e])
			return ((char *)big + (i - e + 1));
		i++;
	}
	return (0);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%s\n", ft_strnstr("Hello", "ell", 5));
//	return (0);
//}
