/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:47:02 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/22 15:26:14 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	e;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	e = ft_strlen(s1);
	while (i < e && ft_strchr(set, s1[i]))
		i++;
	while (e > i && ft_strrchr(set, s1[e - 1]))
		e--;
	return (ft_substr(s1, i, e - i));
}
/*#include <stdio.h>
int	main(void)
{
	const char *s1 = "//Hello//";
	const char *s2 = "/";
	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
}*/
