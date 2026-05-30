/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:37:21 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/22 16:29:50 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	e;
	size_t	to_find_len;

	i = 0;
	e = 0;
	to_find_len = ft_strlen(little);
	if (len == 0)
		return (0);
	if (to_find_len == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len - 1)
	{
		if (e > 0 && big[i] != little[e])
			break ;
		if (big[i] == little[e])
			e++;
		if (e == to_find_len)
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
