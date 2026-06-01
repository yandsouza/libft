/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:01:14 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/27 10:54:49 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub = malloc(len * sizeof(char) + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
//#include <stdio.h>
//int main(void)
//{
//	puts(ft_substr("Hello, World", 0, 5));
//}
