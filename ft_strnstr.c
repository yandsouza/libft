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
	size_t	to_find_len;
	size_t	i;

	if (!little || !big)
		return (NULL);
	to_find_len = ft_strlen(little);
	if (!to_find_len)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (i + to_find_len > len)
			return (NULL);
		if (ft_strncmp(big + i, little, to_find_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
//#include <stdio.h>
//int	main(void)
//{
//	printf("%s\n", ft_strnstr("Hello", "ell", 5));
//	return (0);
//}
