/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:37:21 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/04 14:04:32 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	to_find_len;
	size_t	i;

	i = 0;
	to_find_len = ft_strlen(little);
	if (to_find_len == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (i + to_find_len > len)
			return (0);
		if (ft_strncmp(big + i, little, to_find_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("Hello", "ell", 5));
	return (0);
}
