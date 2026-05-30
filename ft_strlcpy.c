/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:20:12 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/19 13:59:09 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	void *dest;
//
//	dest = malloc(sizeof(*dest) * 30);
//	ft_strlcpy(dest, "zyxwvutsrq", 6);
//	puts(dest);
//	return (0);
//}
