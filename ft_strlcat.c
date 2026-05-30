/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:12:22 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/20 10:28:43 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	dest_len = 0;
	while (dst[dest_len] != '\0' && dest_len < size)
		dest_len++;
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[5] = "Hello";

	ft_strlcat(dest, "zwgstgh", 8);
	puts(dest);
	return (0);
}*/
