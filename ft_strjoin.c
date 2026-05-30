/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:51:49 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/22 16:29:29 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	e;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst = malloc(s1_len + s2_len + 1);
	if (!dst)
		return (0);
	i = 0;
	e = 0;
	while (s1[i] != '\0')
		dst[e++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dst[e++] = s2[i++];
	dst[e] = '\0';
	return (dst);
}
//#include <stdio.h>
//int	main(void)
//{
//	const char *s1 = "Hello, ";
//	const char *s2 = "World!";
//	printf("%s\n", ft_strjoin(s1, s2));
//	return (0);
//}
